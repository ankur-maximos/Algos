#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n[100000];
    unsigned long b,i;
    cin>>b;
    unsigned long m=5,count=0;
    for(i=0;i<b;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<b;i++)
    {
    while(n[i]>=m)
    {
        count+=n[i]/m;
        m*=5;
    }
        cout<<"\n"<<count;
        count=0;
        m=5;
    }
    return 0;
}
