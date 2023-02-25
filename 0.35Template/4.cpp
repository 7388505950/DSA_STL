#include<iostream>
using namespace std;
template<typename T>
void swap(T &n1,T &n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int i1,i2;
    cout<<"Enter the two values : "<<endl;
    cin>>i1>>i2;
    cout<<"----------------------------: "<<endl;
    cout<<"before swaping : "<<endl;
    cout<<"i1 : "<<i1<<endl;
    cout<<"i2 : "<<i2<<endl;
    cout<<"----------------------------: "<<endl;
    swap<int>(i1,i2);
    cout<<"After swaping : "<<endl;
    cout<<"i1 : "<<i1<<endl;
    cout<<"i2 : "<<i2<<endl;
        return 0;
}