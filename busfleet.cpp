#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 long long int a,b;
		 long long int n;
		cin>>n;

		if(n%2 != 0 || n==0 || n==2)
		{
			//odd number
			cout<<"-1"<<endl;
		}
		else 
		{
			//36 = 6*6 => 6 buses
			// 38 = 6*5 + 4*2 => 7 buses : 38/6 + 1
			// 40 = 6*6 + 4*1 => 7 buses : 40/6 + 1
			if(n%6 == 0)
			{
			 a = n/6;
			}
			else 
			{
				a = 1 + n/6;
			}
			
			// 32 = 4*8 => 8 buses
			// 34 = 4*7 + 6*1=> 8 buses 
			// : 34/4 integer division

			b = n/4;

			cout<<a <<" "<<b<<endl;
		}
	}

	return 0;
}