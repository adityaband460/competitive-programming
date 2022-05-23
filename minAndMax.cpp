#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		int small , big;
		if(a < c) small = a;
		else small = c;

		if(b < d) big = d;
		else big = b;

		int ans;
		bool flag = true;

		for(int i=small;i<=big;i++)
		{
			if(i>=a && i<=b && i>=c && i<=d)
			{
				ans = i;
				flag = false;
				break;
			}
		}

		if(!flag) cout<<ans<<endl;
		else cout<<(a+c)<<endl;
	}

	return 0;
}