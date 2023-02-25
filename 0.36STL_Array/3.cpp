#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>arr1={10,20,30,40,50};
    cout<<"The first Element is : "<<arr1.front()<<endl;
    cout<<"The last Element is : "<<arr1.back()<<endl;
    //Using the [] operator :
    cout<<"The first Element : "<<arr1.front()<<endl;
    cout<<"The second Element : "<<arr1[arr1.size()-1]<<endl;
    return 0;
}