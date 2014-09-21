#include <iostream>
#include<vector>
#include<math.h>
#include<iomanip>

using namespace std;
vector<string>v;
vector<string>::iterator it;

int main()
{
    int b,pos1,i,pos2=-1,temp=1,j=0;
    string str,str2;
    long long int rev=0;
    double rev1=0.0;
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
        if(str[0]=='-')
        {
            j=1;
        }
        pos1=str.find(' ');
        for(i=j;i<int(pos1);i++)
        {
            if(str[i]=='.')
            {
            pos2=i;
            continue;
            }
            rev=10*rev+(str[i]-48);
        }
        str=str.substr(int(pos1)+1);
        if(str=="kg")
        {
            str.assign("lb");
            rev*=22046;
        }
        else if(str=="lb")
        {
            str.assign("kg");
            rev*=4536;
        }
        else if(str=="l")
        {
            str.assign("g");
            rev*=2642;
        }
        else
        {
            str.assign("l");
            rev*=37854;
        }
        rev1=(double)rev/10000;
        if(pos2>0)
        {
            rev1/=pow(10,(int(pos1)-int(pos2)-1));
        }
        cout<<temp<<" ";
        if(j==1)
        {cout<<'-';}
        printf("%.4lf",rev1);
        cout<<" "<<str<<endl;
        rev=0;
        temp++;
        j=0;
    }
    return 0;
}
