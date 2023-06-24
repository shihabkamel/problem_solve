#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];


    }
   sort(ara, ara+n);
   int ara1[ara[n-1]];
   for(int i = 0; i < ara[n-1]; i++){
    ara1[i] = 0;
   }
    for(int i = 0; i < ara[n-1]; i++){
    ara1[ara[i]]++;
   }


}
