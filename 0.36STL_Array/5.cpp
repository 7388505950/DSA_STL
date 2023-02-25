#include<iostream>
#include<array>
using namespace std;
int main()
{
   array <int,5> arr2={10,20,30,40,50};
   for(auto i=arr2.rend()-1;i!=arr2.rbegin()-1;i--)//Reversible:
   {
    cout<<*i<<endl;
   }
   array<string,5> str={"Varanasi","Kashi"," Mathura","Vrindavan"};
   for(auto i=str.rbegin();i!=str.rend();i++)
   {
    cout<<*i<<endl;
   }
   
    return 0;
}