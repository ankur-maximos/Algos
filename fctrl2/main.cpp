#include <iostream>

using namespace std;

vector<int>v;

//print
void print(int count)
{
    for(int i=count-1;i>=0;i--)
    {
        printf("%d",fact[i]);
    }
}

//calculate
void fact_cal(int num)
{
    int count=1;
    fact[0] = 1;
    int temp = 0;
    while(num != 1)
    {
        for(int i=0;i<count;i++)
        {
            temp = fact[i]*num +temp;
            fact[i] = temp%10;
            temp = temp/10;
        }
        while(temp!=0)
        {
            fact[count]=temp%10;
            count++;
            temp=temp/10;
        }
        num--;
    }
    print(count);
}

int main()
{
    freopen("fctrl2.txt","r",stdin);
    int test,num;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        fact_cal(num);
        printf("\n");
    }
    return 0;
}
