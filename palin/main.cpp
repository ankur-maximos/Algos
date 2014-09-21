#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string>v;
vector<string>::iterator it;
int main()
{
    //freopen("in.txt", "r",stdin);
    //freopen("out.txt", "w",stdout);
    int b,chan=1;
    long int len,end=0,i,p=0;
    string str;
    cin>>b;
    getline(cin,str);
    while(b--)
    {
        getline(cin,str);
        v.push_back(str);
    }
    for(it=v.begin();it<v.end();it++)
    {
        str=*it;
        if(str[p]=='0')
        {
            while(str[p]=='0')
            {
                p++;
            }
        }
        str=str.substr(p);
        len=str.length();
        end=len-1;
        if(len%2==0)
           p=(len/2)-1;
            p=len/2;
        for(i=0;i<p;i++)
        {
            if(str[end]>str[i])
                chan=1;
            else if(str[end]<str[i])
                chan=0;
            str[end]=str[i];
            end--;
        }
        if((len%2)!=0)
        {
        if(chan==1)
        {
            if(str[len/2]!='9')
            str[len/2]+=1;
            else
            b=-222;
        }
        }
        else
        {
            if(str[(len/2)-1]>str[(len/2)])
            {
                str[(len/2)]=str[(len/2)-1];}
            else if(str[(len/2)-1]<str[(len/2)])
            {
                str[(len/2)-1]+=1;
                str[(len/2)]=str[(len/2)-1];
            }
            else
            {
                if(chan==1)
                {
                    if(str[(len/2)-1]!='9')
                    {
                    str[(len/2)-1]+=1;
                    str[(len/2)]=str[(len/2)-1];
                    }
                    else
                    b=-222;
                }
            }
        }
        if(b==-222)
        {
            for(i=p;i>=0;i--)
            {
                if(str[i]=='9')
                {
                    str[i]='0';
                    continue;
                }
                else
                {
                str[i]+=1;
                break;
                }
            }
        }
        if(str[0]=='0')
        {
            str='1'+str;
        }
        len=str.length();
         if(len%2==0)
           p=(len/2)-1;
        else
            p=len/2;
        for(i=0;i<=p;i++)
            cout<<str[i]-48;
        if(len%2==0)
           i=p;
        else
            i=p-1;
        for(;i>=0;i--)
        {
            cout<<str[i]-48;
        }
        cout<<endl;
        p=0;
        b=0;
        chan=1;
    }
    return 0;
}
