#include<bits/stdc++.h>
#define forn(i,x,n) for(int i=x;i<n;i++)

using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=n;
    int mx=1;
    map<int,int> mp;
    for(int i=2; i*i<=n; ++i)
    {
        if(c%i==0)
        {
            int cnt=0;
            while(c%i==0)
            {
                cnt+=1;
                c/=i;
            }
            mp[i]=cnt;
            if(cnt>mx)
            {
                mx=cnt;
            }

        }
        int res=0;
        for(i,0,mx){
            int now=1;
            for(auto it:mp){
                if(it.ss>0){
                    mp[it.ff]-=1;
                    now*=it.ff;
                }
            }
            res+=now;
        }
        cout<<res<<"\n";
    }
return 0;
}
