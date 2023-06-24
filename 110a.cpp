#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
int total=0;
cin>>n;
while(n!=0){
    if(n%10==4 || n%10==7){
        total+=1;
    }
    n=n/10;
}
if(total==4 || total==7){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
