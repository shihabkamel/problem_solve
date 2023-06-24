#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x,total=0;
    cin>>x;
for(int i=5;i>0;i--){
    total+=x/i;
    x=x%i;
}
    cout<<total;
}

