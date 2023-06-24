#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for(int i=0;i<t;i++){
    int n,k,c=0;
    cin>>n>>k;
    string tmp;
    tmp=s.substr(0,n);
    cout<<"Case "<<i+1<<":"<<endl;
    do{
        cout<<tmp<<endl;
        c++;
        if(c==k)
            {break;}
    }while(next_permutation(tmp.begin(),tmp.end()));
    tmp="";
}

}
