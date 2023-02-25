#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
      array <int,5>arr1;
      cout<<"Enter the five element : "<<endl;
    for(int i=0;i<arr1.size();i++)
    {
     cin>>arr1[i];
    }
    cout<<"Enter the index value : ";
     int p;
     cin>>p;
    cout<<arr1.at(p)<<endl;
  //*Or*/
    cout<<get<2>(arr1)<<endl;//It takes <Numeric>:
    //OR
    cout<<arr1[p]<<endl;
    return 0;
}
