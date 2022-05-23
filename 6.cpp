#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	int hash,total,lb,ub;
	
	while(t--)
	{
		cin>>n;
		hash = (n-1)*2;
		total = hash +2;
		lb=1; ub = hash;
		while(n--)
		{
			for(int j=0;j<total;j++)
			{
				if(j>=lb && j<=ub)
				{
					cout<<"#";
				}
				else
				{
					cout<<"*";
				}

			}
			lb++;ub--;
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
// 0 2 4 6 8
// 1 2 3 4 5
// Pattern printting

//input :
// 3
// 9
// 2
// 5