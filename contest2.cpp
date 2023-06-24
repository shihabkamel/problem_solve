#include<bits/stdc++.h>
using namespace std;
#define li lang lang
#define pb push_back
#define forn(i,x,n) for(int i=x;i<n;i++)

void result()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<1<<" "<<n/2<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        result();
    }
}
