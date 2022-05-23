#include <bits/stdc++.h>
using namespace std;

int index[2]={0};
bool isSafe(int arr[9][9],int row ,int col,int num){

	for(int i=0;i<9;i++)
	{
		if(arr[row][i]==num)
			return false;
	}
	for(int i=0;i<9;i++)
	{
		if(arr[i][col]==num)
			return false;
	}

	int rowstart = row - row%3;
	int colstart = col - col%3;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[rowstart+i][colstart+j]==num)
				return false;
		}
	}

	return true;
}

// no use of this function
// void findEmptyIndex(int arr[9][9]){
	
// 		for(int i=0;i<9;i++)
// 		{
// 			for(int j=0;j<9;j++)
// 			{
// 				if(arr[i][j]==0)
// 				{
// 					index[0]=i;index[1]=j;
// 					// cout<<"in function "<<i<<":"<<j<<endl;
// 					return;
// 				}
// 			}
// 		}
	
// }



// important function
bool solveSudoku(int arr[9][9],int row,int col){

	// my validation test 
	int zeros=0;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(arr[i][j]==0)zeros++;
		}
	}
		if(zeros==0)
			return true;

		// if(col==9 && row==8)
		// 	return true;

		if(col==9)
		{
			row++;col=0;
		}

		if(arr[row][col]>0)
			return solveSudoku(arr,row,col+1);

		for(int i=1;i<=9;i++)
		{
			if(isSafe(arr,row,col,i))
			{
				arr[row][col]= i;
				if(solveSudoku(arr,row,col+1))
					return true;
	
			}	
				arr[row][col] = 0;//back track
					
			
		}
		return false;


}

int main(){
	int arr[9][9];
	int solution[9][9]={0};

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
			solution[i][j]=arr[i][j];
		}
	}

	if(solveSudoku(arr,0,0))
		{
		for(int i=0;i<9;i++)
			{
				for(int j=0;j<9;j++)
				{
					cout<<arr[i][j]<<" ";
				}cout<<"\n";
			}
		}
	else
		{
			cout<<"not solvable"<<endl;
			for(int i=0;i<9;i++)
			{
				for(int j=0;j<9;j++)
				{
					cout<<arr[i][j]<<" ";
				}cout<<"\n";
			}
		}

	return 0;
}