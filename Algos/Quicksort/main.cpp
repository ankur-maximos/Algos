#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int>v;
int length;

int finalcount[50];
int counting=0;
//print
void mprint(int num1,int num2)
{
    for(int i=num1;i<=num2;i++)
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



//partition routine
int partition(int p,int r)
{
     //swap
     int temp=0;
    add(r-p);
    counting+=(r-p);
    int i=p+1;

    int pivot = v[p];
    for(int j=p+1;j<=r;j++)
    {
        if(v[j]<pivot)
        {
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i+=1;
        }
    }
    temp = v[i-1];
    v[i-1] = v[p];
    v[p] = temp;
    return i-1;
}

int random_swapping(int p,int r)
{
    int temp = (r-p+1);
    int middle=0;
    int pivot =0;
    if((temp%2)!=0)
    {
        middle = p+(temp/2);
    }
    else
    {
        middle = p+((temp-1)/2);
    }
    if(((v[middle]>v[p]) && (v[middle]<v[r])) || ((v[middle]<v[p]) && (v[middle]>v[r])))
    {
        pivot = middle;
    }
    else if(((v[p]>v[middle]) && (v[p]<v[r])) || ((v[p]<v[middle]) && (v[p]>v[r])))
    {
        pivot = p;
    }
    else
    {
        pivot = r;
    }
    temp = v[pivot];
    v[pivot] = v[p];
    v[p] = temp;
    return partition(p,r);
}

//int pivot_element()
//{
//    return
//}
//sorting routine
void quicksort(int low,int high)
{
    if(low<high)
    {
    int par = random_swapping(low,high);
//    printf("par = %d\n",par);
    quicksort(low,par-1);
//    printf("numbers between %d and %d\n",low,par-1);
//    mprint(low,par-1);
    quicksort(par+1,high);
//    printf("numbers between %d and %d\n",par+1,high);
//    mprint(par+1,high);
    }
}

int main()
{
//    freopen("Quicksort.txt","r",stdin);
     for(int i=0;i<50;i++)
     {
        finalcount[i] = 0;
     }

int temp1=0;
    ifstream myfile("Quicksort.txt");
    int countNum=0;
    if (myfile.is_open())
    {
    while (!myfile.eof())
    {
    myfile>>temp1;
    v.push_back(temp1);
//    cout<<temp1<<" ";
    countNum++;
    }
    myfile.close();
  }
  else cout << "Unable to open file";
//  cout<<countNum;
   length = v.size();
//   cout<<"length "<<length;
    quicksort(0,length-1);


    for(int i=0;i<50;i++)
{
cout<<finalcount[i];
}

cout<<"\n"<<"count "<<counting;
    return 0;
}
