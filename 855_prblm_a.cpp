#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        int ans=0;
        for(int j=0; j<i; j++)
        {
            if(v[i]==v[j])
            {
                ans+=1;
            } }
      if(ans>0) cout<<"YES"<<endl;
      else{
        cout<<"NO"<<endl;
      }


    }
}
