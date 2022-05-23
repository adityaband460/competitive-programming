#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int a;
    cin>>t;
    int digitsum=0;
    while(t--){
        digitsum=0;
        cin>>a;
        while(a>0){
            int lastdigit = a%10;
            digitsum+=lastdigit;
            a/=10;
        }

    cout<<digitsum<<endl;
    }
     return 0;
}