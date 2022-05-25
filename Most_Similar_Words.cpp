// https://codeforces.com/problemset/problem/1676/C

#include <bits/stdc++.h>
using namespace std;

int mod(int a)
{
	if(a < 0)
		return -a;
	else
		return a;
}

int cost(string a , string b)
{
	int diff = 0;
	for(int i=0;i < a.size();i++)
	{
		diff += mod(a[i]-b[i]);
	}
	return diff;
}
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
	 	cin>>n>>m;

	 	string arr[n];// array of strings

	 	for(int i=0;i<n;i++)
	 	{
	 		cin>>arr[i];
	 	}
	 	int minVal =  INT_MAX,val;
	 	for(int i=0;i<n;i++)
	 	{
	 		for(int j=i+1;j<n;j++)
	 		{
	 		  	val = cost(arr[i],arr[j]);
	 			if(minVal > val)
	 				minVal = val; 
	 		}
	 	}

	 	cout<<minVal<<endl;
	 }
	return 0;
}
