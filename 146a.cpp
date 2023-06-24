#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    float power=pow(10,n/2);
    float result=l/power;
    int frst_half=result;
    int first_half_total=0;
    float temp=(result-frst_half)*power;
    int scnd_half=temp;
    int scnd_half_total=0;

    cout<<frst_half<<" "<<scnd_half;


    return 0;
}
