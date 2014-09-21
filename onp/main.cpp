#include <iostream>
#include <stack>
using namespace std;

int main()
{
    freopen("onp.txt","r",stdin);
    int test;
    char str[400];
    char expr[400];
    stack<char>stck;
    int temp=0,temp1=0;
    scanf("%d",&test);
    while(test--)
    {
        temp=0,temp1=0;
        scanf("%s",&str);
        while(str[temp]!='\0')
        {
            if(str[temp]>=97 && str[temp]<=122)
            {
                expr[temp1] = str[temp];
                putchar(expr[temp1]);
                temp1++;
            }
            else if(str[temp] == ')')
            {
                while(stck.top()!='(')
                {
                char c = stck.top();
                expr[temp1] = c;
                putchar(expr[temp1]);
                temp1++;
                stck.pop();
                }
                stck.pop();
            }
            else
            {
                stck.push(str[temp]);
            }
            temp++;
        }
        printf("\n");
    }
    return 0;
}
