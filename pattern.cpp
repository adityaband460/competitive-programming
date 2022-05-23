#include <iostream>
using namespace std;

int main()
{
	// n rows
	// n-i spaces in each row
	// 1+(i-1)*2 stars in each row
	int n;
	cin>> n;
	int stars = 1, spaces = n-1;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=spaces;k++)
		{
			cout<<" ";
		}
		for (int j=1;j<=stars;j++)
		{
			cout<<"*";
		}cout<<"\n";
		stars = stars +2;
		spaces--;
	}

	return 0;
}