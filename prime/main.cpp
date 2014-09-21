#include <iostream>
#include <stdio.h>
#include <cmath>
#define REP(i,a) for(i=2;i<a;i++)
using namespace std;
int arr[30000]={0};
void min(int n)
{
    long long int i=n*n;
    for(;i<30000;i+=n)
    {
        arr[i]=-1;
    }
    return;
}
int main()
{
   // freopen("prime.txt","w",stdout);
    int i,k=ceil(sqrt(30000));
    REP(i,30000)
    {
        if(arr[i]!=-1)
        cout<<i<<"  ";
        if(i<=k)
        {
            min(i);
        }
        //cout<<arr[i]<<endl;
    }
    return 0;
}
