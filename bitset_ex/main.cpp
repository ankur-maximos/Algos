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
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i+=2)
#define VE vector<int>
#define SZ size()
#define PB push_back
VE v;
unsigned long int a1,a2;
void sieve(unsigned long a,unsigned long b)
{
    unsigned long int i;
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
}
int main()
{
    cout<<"hi"<<endl;
    sieve(3,121);
    return 0;
}
