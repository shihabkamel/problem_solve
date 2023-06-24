#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_litre_toast=(k*l)/nl,total_lime=c*d,total_salt_toast=p/np,total=0;
    int temp=min(total_litre_toast,total_lime);

    int temp2=min(temp,total_salt_toast);
   // cout<<temp2<<endl;
int     result=temp2/n;
    cout<<result;
    return 0;
}
