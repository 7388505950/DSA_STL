#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> arr={10,50,70,60,9,10,15,20};
    list<int>::iterator x;
    for(x=arr.begin();x!=arr.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl<<"--------------------------"<<endl;
    arr.remove(10);
    cout<<endl<<"After removing element : ";
    for(x=arr.begin();x!=arr.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}