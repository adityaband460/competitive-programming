#include <bits/stdc++.h>
using namespace std;


void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{

	int t;
	cin>>t;
	
	while(t--)
	{

		int n ,answer2 = 0;
		cin>>n;
		string s;

		cin>>s;

		// cout<<s<<endl;
		int counter = 0 , answer = 0;
		bool zeros = false;
		bool ones = false;
// only this logic needed
		// when bits change add 1
		for(int j=1;j<n;j++)
		{
			if(s[j] != s[j-1])
				answer2++;
		}
// end of logic

		
		//beginning of long bs logic

		if(s[0] == '0')
		{
			zeros = true;
			
		}
		else {
			ones = true;
			
		}

		bool prevIsOdd = false;
		list <int> numbers;
		for(int i=0;i<n;i++)
		{
			
			if(zeros && s[i] == '0')
			{
				counter++;
				
			}
			
			else if(ones && s[i]=='1')
			{
				counter++;
				
			}

			else if(ones && s[i]=='0')
			{
				// cout<<counter<<" ";
				numbers.push_back(counter);
				counter = 1;
				zeros = true; ones = false;
			}
			else if(zeros && s[i]=='1')
			{

				// cout<<counter<<" ";
				numbers.push_back(counter);

				counter = 1;
				ones = true; zeros = false;
			}
		}
		// cout<<counter<<endl;
		numbers.push_back(counter);
		// showlist(numbers);

		list<int> :: iterator it;
		for(it = numbers.begin(); it!=numbers.end();++it)
		{
			 if(*it % 2 == 0)
			 {
			 	if(prevIsOdd)
			 	{
			 		answer++;
			 		prevIsOdd = true;
			 	}
			 	else
			 	{
			 		// do nothing
			 	}
			 }
			 else
			 {
			 	if(prevIsOdd)
			 	{
			 		answer++;
			 		prevIsOdd = false;
			 	}
			 	else
			 	{
			 		
			 		prevIsOdd = true;
			 	}
			 }
		}

			cout<<answer<<answer2<<endl;
				

		
	}


	return 0;
}