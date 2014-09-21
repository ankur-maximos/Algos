#include <iostream>
#include<string>
using namespace std;

int main()
{
//FILE *fin;
////fin=fopen("test.txt","r+");
//freopen("test.txt","r",stdin);
    string str,str1;
    size_t l;
    int arr[1000];
    int cnd=0;
    getline(cin,str);
    l=str.length();
    arr[0]=-1;arr[1]=0;
    for(int i=2;i<int(l);i++)
    {
        if(str[i-1]==str[cnd])
        {
            cnd++;
            arr[i]=cnd;
        }
        else if(cnd>0)
        {
            cnd=arr[cnd];
            arr[i]=cnd;
        }
        else
        {
            arr[i]=cnd;
        }
    }
    cout<<"checking"<<endl;
    getline(cin,str1);
    int m=0,j=0,flag=0,i=0;
    size_t l1=str1.length();
    for(i=0;i<=int(l1);)
    {
        if(str1[i]==str[j])
        {
            if((j+1)==int(l))
            {
                flag=-1;
                break;
            }
              j++;
              i++;
        }
        else
        {
            m=i-arr[i-m];
            i=m;
            j=0;
        }
    }
    if(flag==-1)
    {
    cout<<"the pos is :"<<m+1;
    }
    else
    {
    cout<<"nothing found";
    }
    return 0;
}
