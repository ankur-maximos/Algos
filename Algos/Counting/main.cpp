#include <iostream>

using namespace std;

int main()
{
    int a[1000001];
    int test,temp;
    scanf("%d",test);
    while(test--)
    {
        scanf("%d",&temp);
        a[temp]++;
    }
    return 0;
}
