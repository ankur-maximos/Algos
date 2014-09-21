#include <iostream>
#include <stack>
#include <stdlib.h>
using namespace std;

int a[3][3];
bool v[3][3];
stack<int>s1;
int c1 = 0;
struct nodes
{
    int x;
    int y;
    nodes()
    {
    }
    nodes(int i,int j)
    {
        x=i;
        y=j;
    }
};
void dfsrecurse(int i,int j)
{
//    cout<<a[i][j]<<"->";
//    c1+=1;
//    if(c1 > 10) {return;}
    if(i<0 || i>2)
    {
        return;
    }
    if(j<0 || j>2)
    {
        return;
    }
    if(v[i][j]==true)
    {
        return;
    }
    cout<<a[i][j]<<endl;
    v[i][j]=true;
    dfsrecurse(i+1,j);
    dfsrecurse(i,j+1);
    dfsrecurse(i-1,j);
    dfsrecurse(i,j-1);
}


void dfstack()
{
    stack<nodes>s;
    nodes topnum;
    int i=0,j=0;
    nodes n;
    n.x = 0;
    n.y = 0;
    s.push(n);
//    a[0][0] = -1;
    cout<<"DFS Traversal"<<endl;
    while(!s.empty())
    {
        topnum = s.top();
//        cout<<topnum<<"->";
        s.pop();
        if(topnum.x<0 || topnum.x>2)
        {
            continue;
        }
        if(topnum.y<0 || topnum.y>2)
        {
            continue;
        }
        if(v[topnum.x][topnum.y]==true)
        {
            continue;
        }
        v[topnum.x][topnum.y]=true;
        cout<<a[topnum.x][topnum.y]<<endl;
        s.push(nodes(topnum.x+1,topnum.y));
        s.push(nodes(topnum.x-1,topnum.y));
        s.push(nodes(topnum.x,topnum.y+1));
        s.push(nodes(topnum.x,topnum.y-1));
    }
}

int main()
{
    freopen("dfs.txt","r",stdin);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            v[i][j]=false;
        }
    }
    dfstack();
    return 0;
}
