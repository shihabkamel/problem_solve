#include<bits/stdc++.h>
using namespace std;
int main(){
int n,total=0;
string str;
cin>>n;
for(int i=0;i<n;i++){
    cin>>str;
    if(str=="++X" || str=="X++"){
        total+=1;
    }
    else if(str=="--X" || str=="X--"){
        total-=1;
    }
}
cout<<total;
}
