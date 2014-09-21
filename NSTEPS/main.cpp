#include<iostream>
#include<vector>

using namespace std;
vector<int> v;
vector<int>::iterator it;

int main()
{
    int x,y,b;
    cin>>b;
    while(b--)
    {
    cin>>x>>y;
    //cout<<x<<"\n"<<y<<"\n";
    if(x%2==0)
    {
       if(y==x-2 || y==x )
            {
                v.push_back(x+y);
            }
            else
            {
                v.push_back(-1);
            }
    }
    else
    {
        if(y==x-2 || y==x)
        {
            v.push_back(x+y-1);
        }
        else
        {
            v.push_back(-1);
        }
    }
    }
    for(it=v.begin();it<v.end();it++)
    {
        if(*it!=-1)
        {
            cout<<*it<<endl;
        }
        else
        {
            cout<<"No Number"<<endl;
        }
    }
    return 0;
}
