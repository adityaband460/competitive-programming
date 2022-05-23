#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string s;

	cin>>t;
	while(t--){
		cin>>s;
		reverse(s.begin(),s.end());
		cout<<stoi(s)<<endl;
	}

	return 0;
}