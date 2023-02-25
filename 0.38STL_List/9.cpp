#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> arr={10,10,70,60,60,15,15,50};
    list<int>::iterator x;
    for(x=arr.begin();x!=arr.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl<<"--------------------------"<<endl;
    arr.unique();
    arr.sort();
    cout<<endl<<"After delete duplicate element : ";
    for(x=arr.begin();x!=arr.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}