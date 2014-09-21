#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("problem.txt");
    int temp;
    int count[41];
    for(int i=0;i<=40;i++)
    count[i]=0;
    if(infile.is_open())
    {
        while(!infile.eof())
        {
            infile>>temp;
            count[temp]++;
        }
    }
    else
    cout<<"unable to open file";
    for(int i=0;i<=40;i++)
    {
        cout<<"count["<<i<<"]"<<"="<<count[i]<<endl;
    }
    return 0;
}
