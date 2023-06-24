#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n,w,total_cost=0,result=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
    total_cost+=k*i;
}
if(total_cost>n){
    cout<<total_cost-n;
}
else{
    cout<<result;
}
return 0;}
