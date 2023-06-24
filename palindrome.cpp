#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        int digitsum=0;
        for(auto u:str){
            digitsum+= (u-'0');
        }
        string s=to_string(digitsum);
        string temp=s;
        reverse(temp.begin(),temp.end());
        if(temp==s) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
