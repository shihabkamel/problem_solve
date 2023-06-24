#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
  int a,b,maxn=0,total=0,temp;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    temp=b-a;
    total+=temp;
    if(maxn<total){
        maxn=total;
    }

}
cout<<maxn;
}
