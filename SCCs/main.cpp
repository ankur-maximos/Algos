#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct nodes
{
    int s;
    bool visited;
    nodes *ptr;
};

vector<nodes> v;

void dfs()
{
}

void reverse_dfs()
{
}

int search(int temp1)
{
    int index=-1;
    int length=v.size();
    nodes node;
    for(int i=0;i<length;i++)
    {
        node = v[i];
        if(node.s==temp1)
        index=i;
        break;
    }
    return index;
}

//initilize
void initalize(int temp1,int temp2)
{
    int t = search(temp1);
    nodes temp_node1,temp_node2;
    if(t==-1)
    {
        temp_node1.s=temp1;
        temp_node1.visited=false;
        temp_node2.s=temp2;
        temp_node2.visited=false;
        temp_node2.ptr=NULL;
        temp_node1.ptr=&temp_node2;
        v.push_back(temp_node1);
        return;
    }
    else
    {
        temp_node1=v[t];
        cout<<"t"<<t<<" temp_node1"<<temp_node1.s<<endl;
        nodes *temp=&temp_node1;
        while(temp->ptr!=NULL)
        {
            cout<<"temp.s"<<temp->s;
            temp=temp->ptr;
        }
        nodes *temp_node = new nodes;
        temp_node->s=temp2;
        temp_node->visited=false;
        temp_node->ptr=NULL;
//        temp->ptr=&temp_node;
        return;
    }
}

int main()
{
    int count=0;
    int temp1=0;
    int temp2=0;
    ifstream myfile("temp.txt");
    nodes node1;
    if(myfile.is_open())
    {
        while(!myfile.eof())
        {
            myfile>>temp1;
            myfile>>temp2;
            cout<<"temp1 "<<temp1<<" temp2 "<<temp2<<endl;
            initalize(temp1,temp2);
            count++;
        }
        myfile.close();
    }
    else
    {
        cout<<"The file cannot be opened"<<endl;
    }
    cout<<"count"<<count;
    int length=v.size();
    for(int i=0;i<length;i++)
    {
        node1 = v[i];
        cout<<node1.s<<endl;
    }
    return 0;
}
