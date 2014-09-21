#include <iostream>

using namespace std;

struct mystruct
{
    int a;
    struct *mystruct;
};

int main()
{
    return 0;
}
