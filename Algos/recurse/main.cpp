#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<char> s;
void mprint()
{
    while(!s.empty())
    {
        printf("%c",s.top());
        s.pop();
    }
    cout<<endl;
}
void mreverse(char c)
{
    s.push(c);
}
int main()
{
    char str[]="rukna";
    printf("%s",str);
    for(int i=0;i<5;i++)
    {
        mreverse(str[i]);
    }
    mprint();
    return 0;
}
