#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    while(n>0){
    int resulta=__gcd(a,n);
    n=n-resulta;
    if(n<=0){
        cout<<0;
        break;
    }
    int resultb=__gcd(b,n);
    n=n-resultb;
    if(n<=0){
        cout<<1;
        break;
    }
    }
}

