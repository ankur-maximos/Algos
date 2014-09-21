#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

vector<int>v;
int length;
long count1 = 0;

int finalcount[50];
vector<int>final;

//print numbers
void mprint()
{
    for(int i=0;i<length;i++)
    {
        printf("%d\n",v[i]);
    }
}

void add(int numadd)
{
    int carry =0;
    int a = 0;

//    cout<<"here"<<numadd;


        for(int i=49;i>=0;i--)
        {
            a=numadd%10;
//            cout<<'a'<<a;
            int temp = finalcount[i]+a+carry;
            carry=temp/10;
            finalcount[i]=temp%10;
            numadd/=10;
            if(numadd==0 && carry==0) break;
        }


}

//combine
void merge(int low,int middle,int high)
{
    int flag = -1;
    int length1 = high-low+1;
    int mtemp[length1];
    int check1=low;int check2=middle+1;
    int i;
    for(i=0;i<length1;)
    {
        if(v[check1]<=v[check2])
        {
            mtemp[i++] = v[check1++];
        }
        else
        {
            int temp = middle-check1+1;
            add(temp);
            mtemp[i++] = v[check2++];
        }
        if(check1 > middle)
        {
            flag = check2;
            break;
        }
        else if(check2 > high)
        {
            flag = check1;
            break;
        }
    }
    if(flag != -1)
    {
    for(;i<length1;i++)
    {
        mtemp[i] = v[flag];
        flag++;
    }
    }
    flag = 0;
    for(int i=low;i<=high;i++)
    {
        v[i] = mtemp[flag];
        flag++;
    }
}

//divide and conquer
void mergesort(int p,int r)
{
    if(p<r)
    {
        int q = floor((p+r)/2);
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);
    }
}

int main()
{
    for(int i=0;i<50;i++)
    {
    finalcount[i] = 0;
    }

 int temp1;
int countNum =0;
  ifstream myfile ("try1.txt");
  if (myfile.is_open())
  {
    while ( !myfile.eof() )
    {
    myfile>>temp1;
    v.push_back(temp1);
//    cout<<temp;
    countNum++;
    }
    myfile.close();
  }
  else cout << "Unable to open file";

length = v.size();
    cout<<"length "<<length;
  mergesort(0,length-2);
    cout<<"count "<<count1;

// string line;


for(int i=0;i<50;i++)
{
cout<<finalcount[i];
}

    return 0;
}
