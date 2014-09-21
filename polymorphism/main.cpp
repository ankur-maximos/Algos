#include <iostream>
#include <cstring>
using namespace std;
class temp {
    int a;
    public:
    temp()
    {
        a=10;
    }
    void print()
    {
        cout<<a;
    }
} ;
int main()
{
temp s;
s.print();
return 0;
}
