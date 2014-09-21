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
#include <bitset>
#include "time.h"
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i+=2)
#define VE vector<int>
#define SZ size()
#define PB push_back
unsigned long int a1[10],a2[10];
void sieve(unsigned long a,unsigned long b)
{
    unsigned long i;
    int j;
    bitset<100000> k;
    int l=b-a+1;
    FOR(i,0,l)
    {
        //cout<<k[i];
        k[i]=true;
    }

    FOR(j,3,sqrt(b)+1)
    {
        if(j>a && !k[j-a]) continue;
        i=(a/j)*j;
        if(i<a) i+=j;
        if(i==j) i+=j;
        i-=a;
        for(;i<l;i+=j) k[i]=false;
    }
    FOR(i,0,l)
    {
        if(k[i]==true) {cout<<a+i<<endl;}
    }
    return;
}
int main()
{
    clock_t start, end;

    int b,i=0;
    scanf("%d\n",&b);
    assert(b<=10);
    while(b--)
    {
        cin>>a1[i]>>a2[i];
//        assert((a2[i]-a1[i])<=100000);
        i++;
    }
    start = clock();
    for(b=0;b<i;b++)
    {
        if((a1[b]==1 || a1[b]==2) && a2[b]>=2)
        {
            cout<<'2'<<endl;
            a1[b]=3;
        }
        if(a1[b]%2==0)
        {
            a1[b]+=1;
        }
        sieve(a1[b],a2[b]);
        cout<<endl;
    }
    end=clock();
    cout<<end-start<<"  tot";
    return 0;
}
