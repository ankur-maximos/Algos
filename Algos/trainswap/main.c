#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("trainswap.txt","r",stdin);
    int v[50];
    int test,num,temp=0,count=0,i,j;
    scanf("%d",&test);
    while(test--)
    {
        count=0;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&temp);
            v[i] = temp;
        }
        for(i=0;i<num-1;i++)
        {
            for(j=0;j<num-1;j++)
            {
                if(v[j]>v[j+1])
                {
                    temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                    count++;
                }
            }
        }
       printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
