#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> lst3;
    int arr[]={100,200,300,400};
    lst3.assign(arr,arr+4);
    cout<<endl<<"Size of lst  : "<<lst3.size();
    cout<<endl<<"Elements are : ";
    list<int>::iterator x;
    for(auto x=lst3.begin();x!=lst3.end();x++)
    {
     cout<<*x<<" ";
    }
    return 0;
}