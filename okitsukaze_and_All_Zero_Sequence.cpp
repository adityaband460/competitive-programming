// https://codeforces.com/problemset/problem/1678/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int zeros=0;
		bool ansFound = false;
		int frequency[101] = {0};
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];

			if(arr[i]==0)
				zeros++;
		}
		int ans;

		if(zeros>=1)
		{
			ans = n - zeros;
			cout<<ans<<endl;

		}

		else
		{
			for(int i=0;i<n;i++)
			{
				int a = ++frequency[arr[i]];

				if(a == 2)
				{
					ans = n;
					cout<<n<<endl;
					ansFound = true;
					break;
				}
			}
			if(!ansFound)
			{
				cout<<n+1<<endl;
			}


		}
		
	}
	return 0;
}