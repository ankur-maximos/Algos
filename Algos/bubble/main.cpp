#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;
    int temp;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&temp);
        v.push_back(temp);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(v[j]>v[j+1])
            {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    for(temp=0;temp<5;temp++)
    {
        printf("%d",v[temp]);
    }
    return 0;
}
