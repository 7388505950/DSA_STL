#include<iostream>
#include<array>
using namespace std;
int main()
{
   array<int,5>arr1={10,20,30,40,50};
   cout<<"Value at index 0 : "<<arr1[0]<<endl;
    cout<<"Value at index 1 : "<<arr1[1]<<endl;
     cout<<"Value at index 2 : "<<arr1[2]<<endl;
      cout<<"Value at index 3 : "<<arr1[3]<<endl;
       cout<<"Value at index 4 : "<<arr1[4]<<endl;
       cout<<"----------------------------"<<endl;
       // Changing Some values :
       arr1[0]=100;
       arr1[3]=200;
       for(int i=0;i<arr1.size();i++)
       {
        cout<<arr1[i]<<" ";
       }
       cout<<endl;
       //Another type to print all element :
       array<char,10> charArray={'a','s','h','i','s','h'};
       for(char c: charArray)
       {
        cout<<c;
       }
    return 0;
}