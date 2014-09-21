#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;

#define MAX 2200000000

unsigned int a[2000],a1[2000];
bitset<50000> b;
int l=sqrt(MAX);
void prime()
{
    int i=3,a=3,k=0;
    unsigned int j=0;
    for(;i<50000;i+=2) {b[i]=true;}
    for(i=3;i<=l;i+=2)
    {
        if(!b[i]) continue;
        k=(a/i)*i;
        if(k<a) k+=i;
        if(k==i) {k+=i;}
        for(j=k;j<=100;j+=i) {b[j]=false;}
    }
}
bool simp(unsigned int a)
{
    int m=0;
    bool s=true;
    for(int j=3;j<=int(sqrt(a));j+=2)
        {
            if(!b[j]) {continue;}
            if(a%j==0)
            {
            int k=a/j;
            if(k%j!=0)
            {
                int p=a-1;
                int q=j-1;
                if(p%q==0)
                {
                    m++;
                }
                else
                {s=false;break;}
            }
            else
            {s=false;break;}
            }
        }
        if(s && m>=3)
        return true;
        else
        return false;
}
void check(unsigned int c,unsigned int d)
{
    int k=0;
    unsigned int i;
    bool s;
    for(i=c;i<=d;i+=2)
    {
       s=simp(i);
       if(s) {cout<<i<<endl;k++;}
    }
    if(k==0) cout<<"none"<<endl;
}
int main()
{
    freopen("phony.txt","r",stdin);
    int i=0;
    prime();
    while(true)
    {
        cin>>a[i]>>a1[i];
        if(a[i]==0 && a1[i]==0)
        break;
        if(a[i]%2==0) a[i]+=1;
        check(a[i],a1[i]);
        i++;
    }
    return 0;
}
