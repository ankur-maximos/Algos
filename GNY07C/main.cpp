#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
vector<string>v;
vector<string>::iterator it;

int main()
{
    int b,pos,rev=0,rev1=0,a[20][20],l[5],i,j;
    int p,temp,r1=0,c3=0;
    string str;
    cin>>b;
    getline(cin,str);
    for(i=0;i<5;i++)
    {
        l[i]=0;
    }
    while(b--)
    {
        getline(cin,str);
        v.push_back(str);
    }
    for(it=v.begin();it<v.end();it++)
    {
        str=*it;
        pos=str.find_first_of(' ');
        for(i=0;i<int(pos);i++)
        {
            rev=10*rev+(str[i]-48);
        }
        str=str.substr(pos+1);
        pos=str.find_first_of(' ');
        for(i=0;i<int(pos);i++)
        {
            rev1=10*rev1+(str[i]-48);
        }
        for(i=0;i<rev;i++)
        {
            for(j=0;j<rev1;j++)
            {
                a[i][j]=-1;
            }
        }
        str=str.substr(pos+1);
        int c1=rev1-1,r2=rev-1;
        int rr1=r1,loop=1;
        for(i=0;i<str.length();i++)
        {
            if(str[i]!=' ')
            temp=str[i]-64;
            else if(str[i]==' ')
            temp=0;
            for(p=4;p>=0;p--)
            {
                l[p]=temp%2;
                temp/=2;
            }
            temp=0;
        while(temp<5)
        {
            if(loop%4==1)
            {
            if(r1==0)
            {
            r1=1;
            loop=-1;
            }
            for(j=(r1-1);j<=c1;j++)
            {
                if(temp<5)
                {
                if(loop==-1)
                {
                a[r1-1][j]=l[temp];
                loop=-22;
                }
                else
                {
                a[r1][j]=l[temp];
                }
                temp++;
                }
            }
             if(j>c1)
            {
                if(loop!=-1)
                {
                r1++;
                loop=2;
                }
                //loop=1;
            }
            }
            else if(loop%4==2)
            {
            for(j=rr1;j<=r2;j++)
            {
                if(temp<5)
                {
                a[j][c1]=l[temp];
                temp++;
                }
            }
            if(j>r2)
            {
                rr1++;
                loop++;
            }
            }
            else if(loop%4==3)
            {
            for(j=c1;j>=c3;j--)
            {
                 if(temp<5)
                {
                a[r2][j]=l[temp];
                temp++;
                }
            }
            if(j<c3)
            {
                c1--;
                loop++;
            }
            }
            else if(loop%4==4)
            {
            for(j=r2;j>=rr1;j--)
            {
                if(temp<5)
                {
                a[j][c3]=l[temp];
                temp++;
                }
            }
            if(j<rr1)
            {
                r2--;
                c3++;
                loop++;
            }
            }
        }
        }
        temp=0;
        for(i=0;i<rev;i++)
        {
            for(j=0;j<rev1;j++)
            {
                if(a[i][j]!=-1)
                {
                cout<<a[i][j];
                }
                else
                cout<<temp;
            }
        }
        cout<<endl;
    }
    return 0;
}
