#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],row=0,col=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]==1){
                row=i;
                col=j;
                break;
            }
        }
    }
    cout<<abs(row-2)+abs(col-2);

return 0;
}
