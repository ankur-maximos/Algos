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
    FOR(i,1,l)
    {
        k[i]=false;
        cout<<k[i];
    }

    //FOR(j,3,ceil(sqrt(b)))
    {

    }
}
int main()
{
    sieve(11,50);
    return 0;
}
