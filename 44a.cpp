#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
optimize();
int n;
cin>>n;
pair<string,string>p;
vector<pair<string,string>>v;
for(int i=0;i<n;i++){
    cin>>p.first>>p.second;
    v.push_back({p.first,p.second});
}
sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();
cout<<sz;

}
