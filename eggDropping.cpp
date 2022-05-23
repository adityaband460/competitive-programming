#include <bits/stdc++.h>
using namespace std;

int arr[10000][10000] = {0};


int eggThrow(int floor,int egg);

int main()
{
	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;
		
		cout<<eggThrow(n,k)<<endl;

	}
	

	return 0;
}
int eggThrow(int floor,int egg)
{
	if(arr[floor][egg] != 0)
	{
		// cout<<"ans taken from table: ("<<floor<<":"<<egg<<")\n";
		return arr[floor][egg];
	}
	
	if(floor ==0)
		return 0;
	if(floor == 1)
		return 1;
	if(egg == 1)
		return floor;
	int min = floor,ans;
	for(int i=1;i<=floor;i++)
	{
		int up = 1 + eggThrow(floor-i,egg);
		int down = 1+ eggThrow(i-1,egg-1);
		ans = max(up,down);
		if(ans < min)
			min = ans;
	}
	arr[floor][egg] = min;

	return min;
}