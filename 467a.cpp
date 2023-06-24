#include<bits/stdc++.h>
using namespace std;
int main(){
int n,p,q,sub=0,total=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>p>>q;
    sub=abs(p-q);
    if(sub>=2){
        total+=1;
    }
}
cout<<total;
return 0;
}
