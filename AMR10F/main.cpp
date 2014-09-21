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
int main()
{
    //freopen("amr.txt","r",stdin);
    int b,n,a,d,i;
    unsigned long sum=0;
    cin>>b;
    assert(b<=100);
    while(b--)
    {
        cin>>n>>a>>d;
   //     cout<<n<<a<<d;
        for(i=0;i<n;i++)
        {
           sum+=i*d+a;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}


