#include<bits/stdc++.h>
using namespace std;
int main(){
int n,p,q;
cin>>n;
int arr1[n];
int arr2[n-1];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
for(int i=0;i<n-1;i++){
    cin>>arr2[i];
}
int combo[n+(n-1)];
int j=0;
for(int i=0;i<n;i++){
    combo[j++]=arr1[i];
    combo[j++]=arr2[i];
}
int length=sizeof(combo)/sizeof(combo[0]);

int *maxi=max_element(combo,combo+length);

if(*maxi==n){
    cout<<"I become the guy.";
}
else{
    cout<<"Oh, my keyboard!";
}

}
