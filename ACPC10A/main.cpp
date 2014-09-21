#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string>v;
vector<int>v1;
vector<string>::iterator it;
vector<int>::iterator it1;
int main()
{
    int a[3];
    int b,c;
    string str;
    cin>>a[0]>>a[1]>>a[2];
    while(a[0]!=0 || a[1]!=0 || a[2]!=0)
    {
        if(a[1]-a[0]==a[2]-a[1])
        {
        str="AP ";
        v1.push_back(a[2]+(a[1]-a[0]));
        }
        else
        {
            b=a[1]/a[0];
            c=a[2]/a[1];
            if(b==c)
            {
                str="GP ";
                v1.push_back(a[2]*b);
            }
        }
        v.push_back(str);
        getline(cin,str);
        cin>>a[0]>>a[1]>>a[2];
    }
    it1=v1.begin();
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<*it1<<endl;
        it1++;
    }
    return 0;
}
