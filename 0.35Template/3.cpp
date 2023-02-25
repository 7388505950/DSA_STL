#include<iostream>
using namespace std;
template<class A,class B,class C>
B Greater(A x,B y,C z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        else
        return z;
    }
    else
    if(y>z)
    {
        return y;
    }
    else
    return z;
}
int main()
{
   printf("largest Nmber ==>");
   cout<<Greater<int,float,int>(20.5,30.8,36.1)<<endl;
   cout<<"----------------------"<<endl;
   cout<<Greater<char,char,char>('g','z','s');
    return 0;
}