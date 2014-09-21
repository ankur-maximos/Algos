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
#define FOR(i,a,b) for(i=a;i<b;i+=2)
#define VE vector<int>
#define SZ size()
#define PB push_back
VE v;
unsigned long int a1[10],a2[10];
void sieve()
{
    v.PB(2);
    int i,root,j;
    bool found;
    FOR(i,3,31623)
    {
        found=false;
        root=floor(sqrt(i));
        //cout<<root<<endl;
        for(j=1;j<v.size() && v[j]<=root;j++)
        {
            if(i%v[j]==0)
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            v.PB(i);
        }
    }
    return;
}
void find(unsigned long a,unsigned long b)
{
    unsigned long i;
    int j;
    bool f;
    FOR(i,a,b+1)
    {
        f=false;
        for(j=1;j<v.size() && v[j]<i;j++)
        {
            if(i%v[j]==0)
            {
                f=true;
                break;
            }
        }
        int s=0;
        if(!f)
        {
            //cout<<"hello";
           cout<<i<<endl;
           s++;
        }
        cout<<s;
    }
    return;
}
int main()
{
    //freopen("primei.txt","r",stdin);
    int b;
    scanf("%d\n",&b);
    assert(b<=10);
    sieve();
    int i=0;
    while(b--)
    {
        cin>>a1[i]>>a2[i];
        i++;
    }
        //cout<<a1<<" "<<a2;
        for(b=0;b<i;b++)
        {
          //  cout<<a1[b]<<a2[b];
        if((a1[b]==1 || a1[b]==2) && a2[b]>=2)
        {
        cout<<v[0]<<endl;
        a1[b]=3;
        }
        if(a1[b]%2==0)
        {
            find(a1[b]+1,a2[b]);
        }
        else
        {
            find(a1[b],a2[b]);
        }
        cout<<endl;
    }
    return 0;
}
