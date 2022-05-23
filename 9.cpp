#include <bits/stdc++.h>
using namespace std;

int min4(int a,int b,int c,int d)
{
	int temp1 = a<b?a:b;
	int temp2 = c<d?c:d;
	return temp1<temp2?temp1:temp2;

}
int main()
{
	int n;
	cin>>n;
	
	int cols = n*2 -1;
	int rows= cols;
	int lastindex = rows-1;
	int min;

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			// min = i<j?i:j;
			// min = min<(lastindex-i)? min:lastindex-i;
			// min = min<(lastindex-j)? min:lastindex-j;

			min = min4(i,j,rows-i-1,cols-j-1);
			cout<<(n-min);
		}
		cout<<endl;
	}
	

	return 0;
	}


	