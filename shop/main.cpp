#include <iostream>
#include <queue>
using namespace std;

class vertex
{
    public:
    int i;
    int j;
    int time;
    vertex(int x,int y)
    {
        i = x;
        j = y;
    }
};



int main()
{
    int height,width;
    scanf("%d%d",&height,&width);
    priority_queue<vertex> myqueue;
    vertex v(3,5);
    cout<<v.time;
    return 0;
}
