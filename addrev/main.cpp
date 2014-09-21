#include <iostream>

using namespace std;

int main()
{
    int a[10000],b[10000],rev1=0,rev2=0,d,i,m=0;
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<d;i++)
    {
        //cout<<a[i]<<"\t"<<b[i]<<"\n";
        rev1=rev2=0;
        while(!(a[i]%10))
        {
            a[i]/=10;
        }
        while(!(b[i]%10))
        {
            b[i]/=10;
        }
        while(a[i]!=0)
        {
            rev1=(rev1*10)+(a[i]%10);
            a[i]/=10;
        }
        while(b[i]!=0)
        {
            rev2=(rev2*10)+(b[i]%10);
            b[i]/=10;
        }
        //cout<<rev1<<"\n"<<rev2;
        m=rev1+rev2;
        rev1=0;
        while(!(m%10))
        {
            m/=10;
        }
        while(m!=0)
        {
            rev1=(rev1*10)+(m%10);
            m/=10;
        }
        cout<<rev1<<"\n";
        m=0;
    }
    return 0;
}
