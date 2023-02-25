#include<iostream>
using namespace std;
template<class T>
T sum(T a[],int length)
{
  T sum1=0;
  for(int i=0;i<length;i++)
     sum1=sum1+a[i];
  return sum1;
}
int main()
{
    int int_data[5];
    float float_data[5];
    int i;
    cout<<endl<<"Enter the five int Numbers : "<<endl;
    for(int i=0;i<5;i++)
    {
      cin>>int_data[i];
    }
   cout<<endl<<"Enter the five float Numbers : "<<endl;
    for(int i=0;i<5;i++)
    {
      cin>>float_data[i];
    }
    cout<<endl<<"sum int : "<<sum<int>(int_data,5);
     cout<<endl<<"sum floatt : "<<sum<float>(float_data,5);
    return 0;
}