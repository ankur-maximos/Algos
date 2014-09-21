#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

vector<string>v;
vector<string>::iterator it;
int main()
{
    int pos1=0,pos2=0,pos3=0,rev1=0,rev2=0,temp=0,b;
    unsigned int i=0;
    string str,str1,str2;
    int size=0;
    std::ostringstream sin;
    cin>>b;
    getline(cin,str);
    getline(cin,str);
    while(b--)
    {
    getline(cin,str);
    pos1=str.find('+');
    pos2=str.find('=');
    pos3=str.find('m');
    if(pos3>pos2)
    {
        for(i=0;i<int(pos1)-1;i++)
        {
            rev1=rev1*10+(str[i]-48);
        }
        for(i=int(pos1)+2;i<int(pos2)-1;i++)
        {
            rev2=rev2*10+(str[i]-48);
        }
        temp=rev1+rev2;
        sin<<temp;
        str2=sin.str();
        str1.assign(str2.begin()+size,str2.end());
        size=str2.length();
        str.replace(int(pos2)+2,str.length()-1,str1);
        v.push_back(str);
    }
    else if(pos3<pos1)
    {
        for(i=int(pos1)+2;i<int(pos2)-1;i++)
        {
            rev1=rev1*10+(str[i]-48);
        }
        for(i=int(pos2)+2;i<str.length();i++)
        {
            rev2=rev2*10+(str[i]-48);
        }
        temp=rev2-rev1;
        sin<<temp;
        str2=sin.str();
        str1.assign(str2.begin()+size,str2.end());
        size=str2.length();
        str.replace(0,int(pos1)-1,str1);
        v.push_back(str);
    }
    else
    {
        for(i=0;i<int(pos1)-1;i++)
        {
            rev1=rev1*10+(str[i]-48);
        }
        for(i=int(pos2)+2;i<str.length();i++)
        {
            rev2=rev2*10+(str[i]-48);
        }
        temp=rev2-rev1;
        sin<<temp;
        str2=sin.str();
        str1.assign(str2.begin()+size,str2.end());
        size=str2.length();
        str.replace(int(pos1)+2,int(pos2)-int(pos1)-3,str1);
        v.push_back(str);
    }
    rev1=0,rev2=0;
    str2=" ";
    if(b>=1)
    {
    getline(cin,str2);
    }
    }
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
