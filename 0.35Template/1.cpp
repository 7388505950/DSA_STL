#include<iostream>

using namespace std;
template<class T,class F>
  F addition(T x,F y)
  {
   return x+y; 
  }
int main()
{
   cout<<addition<int,float>(10,20.5);
    return 0;
}
  