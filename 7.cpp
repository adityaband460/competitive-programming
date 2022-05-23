#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;

	if(n%4==0 || n%4==3){
		cout<<"0";

	}
	else 
	{
		cout<<"1";
	}
	
// Another way
// int n;
// 	cin >> n;
// 	long long sum = n * 1ll * (n + 1) / 2;
// 	cout << (sum & 1) << endl;

}