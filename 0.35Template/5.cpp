#include<iostream>
using namespace std;
template<class T>
T Addition(T x,T y)
{
 return x+y;
}
int main()
{
    int i1,i2;
    cout<<"Enter two numbers : "<<endl;
    cin>>i1>>i2;
    cout<<Addition(i1,i2)<<endl;
    return 0;
}