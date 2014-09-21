#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <fstream>
#include <stack>
#include <map>
#include <set>
#include <cassert>
#include <cmath>
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
VE v;
unsigned long a1,a2;
void find(unsigned long a,unsigned long b)
{
    unsigned long i,j;
    unsigned int sq;
    bool found;int s=0;
    for(i=a;i<=b;i+=2)
    {
        //cout<<"hi"<<i;
        found=false;
        sq=ceil(sqrt(i));
        for(j=0;j<v.size() && v[j]<=sq;j++)
        {
            if(i%v[j]==0)
            {
            found=true;
            break;
            }
        }

        if(!found)
        {
            int k=v[v.size()-1];
            if(k<i)
            v.PB(i);
            if(i>=a1 && i<=a2)
            {cout<<i<<endl;s++;}
        }
    }
    cout<<s;
    return;
}
int main()
{
    //freopen("primei.txt","r",stdin);
    unsigned int b;
    scanf("%d\n",&b);
    v.PB(2);
    while(b--)
    {
    //scanf("%ul%ul",&a1,&a2);
    cin>>a1>>a2;
    assert(a1>=1);
    if((a1==1 || a1==2) && a2>=2)
    {
    cout<<v[0]<<endl;
    a1=2;
    }
    find(3,a1-1);
    if(a1%2==0)
    {
        find(a1+1,a2);
    }
    else
    {
        //cout<<"ll"<<a1<<a2;
        find(a1,a2);
    }
    cout<<endl;
    }
    return 0;
}
