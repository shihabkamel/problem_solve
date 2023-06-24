#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n],total=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int j=0; j<n; j++)
    {
        int i=(n-1)/2;
        total+=arr[i][j];
    }
    for(int i=0; i<n; i++)
    {
        int j=(n-1)/2;
        total+=arr[i][j];
    }
    for(int i=0;i<n; i++)
    {
        total+=arr[i][i];
    }
    for(int i=0;i<n;i++){
            total+=arr[i][n-1-i];
    }
    int x=(n-1)/2;
    int middle=arr[x][x];
    total=total-3*middle;
    cout<<total;

    return 0;
}

