// https://codeforces.com/problemset/problem/1676/D

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;

		int board[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>board[i][j];
			}
		}
		int sum,diagonal,maxSum = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				sum = board[i][j];
				diagonal = min(n,m);
				
				for(int k=1;k<=diagonal;k++)
				{
					if(i-k >= 0 && j-k >=0)
					{
						sum += board[i-k][j-k];
						// cout<<i-k<<" : "<<j-k<<endl;
					}
					else
						break;
				}
				for(int k=1;k<=diagonal;k++)
				{
					if(i-k >=0 && j+k < m)
					{
						sum += board[i-k][j+k];
						// cout<<i-k<<" : "<<j+k<<endl;
					}
					else
						break;
				}

				for(int k=1;k<=diagonal;k++)
				{
					if(i+k < n && j-k >=0)
					{
						sum += board[i+k][j-k];
						// cout<<i+k<<" : "<<j-k<<endl;
					}
					else
						break;
				}
				for(int k=1;k<=diagonal;k++)
				{
					if(i+k < n && j+k < m)
					{
						sum += board[i+k][j+k];
						// cout<<i+k<<" : "<<j+k<<endl;
					}
					else
						break;
				}

				if(maxSum < sum)
					maxSum = sum;

			}
		}
		cout<<maxSum<<endl;
	}
	return 0;
}