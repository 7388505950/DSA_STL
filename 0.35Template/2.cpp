#include<iostream>
using namespace std;
template<class T,class F>
T Large(T x,T y)
{
  return x>y?x:y;
}
int main()
{
  int a,b;
  float c,d;
  char e,f;
  cout<<endl<<"Enter the two int values:";
  cin>>a>>b;
  cout<<endl<<"Enter the two floating values:";
  cin>>c>>d;
  cout<<endl<<"Enter the two char values:";
  cin>>e>>f;
  cout<<endl<<"-----------------------------"<<endl;
  cout<<Large<int,int>(a,b)<<endl;
  cout<<Large<char,char>(e,f)<<endl;
  cout<<Large<float,float>(c,d)<<endl;
    return 0;
}