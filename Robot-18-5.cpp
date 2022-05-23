#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int row,col;
		string line;
		cin>>row>>col; 
		
		char **arr = new char*[row];
		for(int i=0;i<row;i++)
		{
			arr[i] = new char[col];
		}


		for(int i=0;i<row;i++)
		{
			cin>>line;
			for(int j=0;j<col;j++)
			{
				arr[i][j] = line[j];
			}
		}
// logic
		int minX=row,minY=col;

		for(int i=0;i<row;i++)
		{
			
			for(int j=0;j<col;j++)
			{
				if(arr[i][j]=='R')
				{
					if(i<minX)
						minX = i;
					if(j<minY)
						minY = j;
				}
			}
			
		}

		if(arr[minX][minY]=='R')
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}

	
	return 0;
}