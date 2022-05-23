#include <bits/stdc++.h>
using namespace std;

int main(){

	long long int mod = 1e9 + 7;
	int n;
	long long int number;
	long long int ans=1;
	cin>>n;

	while(n--){
		cin>>number;
		number = number%mod;
		ans = (ans * number)%mod;
	}
	cout<<ans;
	return 0;

}