#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
using namespace std;

int compare_function(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x - *y;
}

int mbinary_search(int a[],int search,int left,int right)
{
    int mid = (left+right)/2;
    if(left>right)
    {
       int temp=-1;
       cout<<temp<<endl;
        return temp;
    }
    if(a[mid]==search)
    {
        cout<<"found"<<endl;
        return mid;
    }
    else if(a[mid]<search)
    {
        mbinary_search(a,search,mid+1,right);
    }
    else{
        mbinary_search(a,search,left,mid-1);
    }
}

int main()
{
//    list<int>v;
//    list<int>::iterator it;
//    int test,num,search;
//    scanf("%d",&test);
//    while(test--)
//    {
//        scanf("%d",&num);
//        v.push_back(num);
//    }
//    v.sort();
//    it = v.begin();
//    scanf("%d",&search);
//    int found = mbinary_search(v,search);
//    if(found!=-1)
//    printf("%d",found);
//    else
//    printf("Not found");
    //using arrays
    int a[5],temp,search;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,5,sizeof(int),compare_function);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    scanf("%d",&search);
    int pos = mbinary_search(a,search,0,4);
    if(pos!=-1)
    {
    printf("%d\n",pos);
    }

    //printf("not found");
    return 0;
}
