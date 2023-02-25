#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>arr1={10,20,30,40,50};
    cout<<endl<<"Total Number of Array : "<<arr1.size()<<endl;
    //Second Method :----------------
    int c=0;
    for(auto i=arr1.begin();i!=arr1.end();i++)
    {
        c++;
        cout<<*i<<endl;
    }
    cout<<"Total Number of Array : "<<c<<endl;
    return 0;
}