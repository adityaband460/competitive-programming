#include <bits/stdc++.h>
using namespace std;


set<int> checkPosibilities(int i, int j,set<int> pos);

int arr[9][9] = {0};
unordered_map<string, set<int>> umap;

void crossHatching(){
	int frequency[10] = {0};

	// hashmap rowise

	for(int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			frequency[arr[i][j]]++;
		}

		for(int k=1;k<=9;k++)
		{
			if(frequency[k]==1)
			{
				arr[i][]
			}
		}
	}
	// column wise
	// box wise




}



int main()
{
	int zeroCounter = 0;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(arr[i][j]==0)
			{
				zeroCounter++;
				umap[to_string(i)+to_string(j)]= {1,2,3,4,5,6,7,8,9};
			}
				
			}
		}
		
	
	 cout<<"before : "<<zeroCounter<<"\n";
		

	// set<int> p ={1,2,3,4,5,6,7,8,9};
	// set<int>::iterator it;
	// set<int> pp = checkPosibilities(2,1,p);
	// for (it=pp.begin(); it!=pp.end(); ++it)
 //    cout << ' ' << *it;
 //  	cout << '\n';


    int temp = 10;
	 while(temp--)
	 {
		for(int i=0;i<9;i++)
		{
			for (int j=0;j<9;j++)
			{
				if(arr[i][j]==0){
					set<int> s = checkPosibilities(i,j,umap[to_string(i)+to_string(j)]);
					umap[to_string(i)+to_string(j)]= s;
					if(s.size()==1)
					{
						arr[i][j] = *s.begin();
					}
				}
				
			}
		}
	 }
int p=0;// no of zeroes
	 for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(arr[i][j]==0)
				{
				p++;
					
				}
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		
	}
	 cout<<"\nafter : "<<p;
	cout << '\n';
	 for(int i=0;i<9;i++)
	 {
	 	for(int j=0;j<9;j++)
	 	{
	 		if(arr[i][j]==0)
	 		{
	 			set<int> s = umap[to_string(i)+to_string(j)];
	 			set<int>::iterator it;

	 			cout<<"("<<i<<" "<<j<<"):" ;
	 			for (it=s.begin(); it!=s.end(); ++it)
			    cout<< ' ' << *it;
			  	cout << '\n';
	 		}
	 	}
	 }


}

set<int> deleteForloop(int a, int b, set<int> pos){
	for(int i=a;i<=a+2;i++)
		{
			for(int j=b;j<=b+2;j++)
			{
				pos.erase(arr[i][j]);
			}
		}
		return pos;
}

set<int> checkPosibilities(int i, int j , set<int> pos)
{
	// set<int> pos = {1,2,3,4,5,6,7,8,9};
	//row wise
	for(int k=0;k<9;k++)
	{
		pos.erase(arr[i][k]);
	}
	//col wise
	for(int k=0;k<9;k++)
	{
		pos.erase(arr[k][j]);
	}
	// box
	for(int k=0;k<9;k++)
	{
		if(i<=2){
			if(j<=2)
			{
				pos = deleteForloop(0,0,pos);
			}
			else if(j<=5){
				pos = deleteForloop(0,3,pos);
			}
			else{
				pos = deleteForloop(0,6,pos);
			}
		}
		else if(i<=5){
			if(j<=2){
				pos = deleteForloop(3,0,pos);
			}
			else if(j<=5){
				pos = deleteForloop(3,3,pos);
			}
			else{
				pos = deleteForloop(3,6,pos);
			}
		}
		else{
			if(j<=2){
				pos = deleteForloop(6,0,pos);
			}
			else if(j<=5){
				pos = deleteForloop(6,3,pos);
			}
			else{
				pos = deleteForloop(6,6,pos);
			}
		}
	
	}
	return pos;
}

