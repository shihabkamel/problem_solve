#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n,m;
    cin>>n>>m;
   map<string ,string>v;
    for(int i=0; i<(n+m); i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        v[s1]=s2;
    }
    for(int i=n; i<n+m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i].second==v[j].second){
                  cout<<v[i].first<<" "<<v[i].second<<"#"<<v[j].first<<endl;
              }

        }
    }

}
