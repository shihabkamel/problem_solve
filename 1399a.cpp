#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        int arr[a];
        for(int j=0; j<a; j++)
        {
            cin>>arr[i];
        }
        if(a==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            sort(arr,arr+n);
            for(int k=0; i<a; i++)
            {
                int dif=abs(arr[k]-arr[k+1]);
                if(dif<=1){
                    total+=1;
                }
            }
            if(total==0){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
