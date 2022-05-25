// https://codeforces.com/problemset/problem/3/A

#include <bits/stdc++.h>
using namespace std;

int mod(int a)
{
	if(a < 0)
		return -a;
	else
		return a;
}


int main()
{
	string start,end;
	cin>>start>>end;

	int x1 = start[0], 
	y1 = start[1] ,
	x2 = end[0], 
	y2 = end[1];

	 int minDist = max( mod(x1-x2),mod(y1-y2) );
	 cout<<minDist<<endl;

	if(x1 == x2 && y1 == y2)
	 	{
	 			
	 		return 0;
	 	}

	 while(x1!=x2 && y1!=y2)
	 {
	 	if(x2 > x1  && y2 > y1)
		 {
		 	x1++;
		 	y1++;
		 	cout<<"RU"<<endl;
		 }
		else if(x2 < x1  && y2 > y1)
		 {
		 	x1--;
		 	y1++;
		 	cout<<"LU"<<endl;
		 }
		else if(x2 > x1  && y2 < y1)
		 {
		 	x1++;
		 	y1--;
		 	cout<<"RD"<<endl;
		 }
		else if(x2 < x1  && y2 < y1)
		 {
		 	x1--;
		 	y1--;
		 	cout<<"LD"<<endl;
		 }
	 }
	 // if they are in same row then go column wise
	 // if they are in same colum then go row wise
	 if(x1 == x2 && y1 == y2)
	 	{
	 		return 0;
	 	}

	 if(x1 == x2)
	 {
	 	if(y1 < y2)
	 	{
	 		for(int i=1;i<=y2-y1;i++)
	 		{
	 			cout<<"U"<<endl;
	 		}
	 		return 0;
	 	}
	 	else
	 	{
	 		for(int i=1;i<=y1-y2;i++)
	 		{
	 			cout<<"D"<<endl;
	 		}
	 		return 0;
	 	}
	 }
	 if(y1 == y2)
	 {
	 	if(x1 < x2)
	 	{
	 		for(int i=1;i<=x2-x1;i++)
	 		{
	 			cout<<"R"<<endl;
	 		}
	 		return 0;
	 	}
	 	else
	 	{
	 		for(int i=1;i<=x1-x2;i++)
	 		{
	 			cout<<"L"<<endl;
	 		}
	 		return 0;
	 	}
	 }

	 
	return 0;
}
