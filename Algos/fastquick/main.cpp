#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int test,temp;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&temp);
        v.push_back(temp);
    }
    int length = v.size();
    sort(v.begin(),v.end());
    for(it=v.begin();it<v.end();it++)
    {
        printf("%d\n",*it);
    }
    return 0;
}
