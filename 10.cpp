#include <bits/stdc++.h>
using namespace std;

int main(){

	// int n,implemented=0;
	// cin>>n;
	// int a,b,c;
	// while(n--)
	// {
	// 	cin>>a>>b>>c;
	// 	if((a+b+c)>=2)
	// 		implemented++;
	// 	a=b=c=0;
	// }
	// cout<<implemented;

	// return 0;
	set<int> pos = {1,2,3,4,5,6,7,8,9};
	set<int>::iterator it;
	pos.erase(4);
	pos.erase(0);

	cout<<*pos.begin()<<"\n";

	for (it=pos.begin(); it!=pos.end(); ++it)
    cout << ' ' << *it;
  	cout << '\n';

  	return 0;
}