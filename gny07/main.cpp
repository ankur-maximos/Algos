#include <iostream>
#include<string.h>
#include<vector>

using namespace std;
vector<string> v;
vector<string>::iterator it;
int main()
{
    int b,i,m=0,pos=0,k,rev=0;
    string str;
    cin>>b;
   // cout<<endl;
    getline(cin,str);
    while(b--)
    {
        getline(cin,str);
        pos=str.find(" ");
        for(k=0;k<int(pos);k++)
        {
            m=str[k]-48;
            rev=rev*10+m;
        }
        str=str.substr(int(pos)+1);
        str.erase(rev-1,1);
        v.push_back(str);
        rev=0;
    }
    b=1;
    for(it=v.begin();it<v.end();it++)
    {
        cout<<b++<<" "<<*it<<endl;
    }

    return 0;
}

