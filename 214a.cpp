#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cnt=0,n,m,b;
    cin>>n>>m;
    for(int a=0;a*a<=n;a++){
        b=n-a*a;
        if((a+(b*b))==m){
            cnt+=1;
        }
    }
    cout<<cnt;


}
