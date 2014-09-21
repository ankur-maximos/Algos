#include <iostream>
#include<vector>
using namespace std;

vector<int>v;
vector<int>::iterator it;
int main()
{
    int cas,frn[1000],i,n,j,temp2;
    long int sta,temp=0;
    cin>>cas;
    temp2=cas;
    while(cas--)
    {
        cin>>sta;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>frn[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(frn[j]<frn[j+1])
                {
                    temp=frn[j];
                    frn[j]=frn[j+1];
                    frn[j+1]=temp;
                }
            }
        }
        temp=0;
        for(i=0;i<n;i++)
        {
            temp+=frn[i];
            if(temp>=sta)
            break;
        }
        if(i==n)
        i=-3;
        v.push_back(i+1);
    }
    i=1;
    for(it=v.begin();it<v.end();it++)
    {
        cout<<"Scenario #"<<i<<":"<<endl;
        if(*it>=0)
        cout<<*it<<endl;
        else
        cout<<"impossible"<<endl;
        i++;
        cout<<endl;
    }

    return 0;
}
