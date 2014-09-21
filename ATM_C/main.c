#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a,b,c,count=0,i;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%ld",&c);
        if(c%b == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
