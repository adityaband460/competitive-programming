#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int cols = n*2 -1;
	int rows= cols;
	int m = rows*cols;
	int arr[rows][cols];
	int flag[rows][cols];

	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			flag[i][j]=0;
		}
	}



	for(int k=0;k<n;k++)
	{
		for(int i=0;i<rows;i++)
			{
				for(int j=0;j<cols;j++)
				{

					if(i==k||i==(cols-1)-k||j==k||j==(cols-1)-k)
					{
						if(flag[i][j]==0)
						{
							arr[i][j] = n-k;
							flag[i][j] = 1;
						}
					}
					
				}
				
			}

	}

	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
		
	return 0;
	}


	
					// 	if(i==0||i==cols-1||j==0||j==cols-1)
					// cout<<n;
					// else if(i==1||i==(cols-1)-1||j==1||j==(cols-1)-1)
					// {
					// 	cout<<n-1;
					// }
					// else if(i==2||i==(cols-1)-2||j==2||j==(cols-1)-2)
					// {
					// 	cout<<n-2;
					// }
					// else
					// 	cout<<"*";