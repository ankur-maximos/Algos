#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int num;
    scanf("%d",&num);
    if(num%10==0)
    {
        cout<<"2";
    }
    else{
        cout<<"1"<<endl;
        cout<<num%10;
    }
    return 0;
}
