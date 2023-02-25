#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={50,60,30,40,5,4};
   int size=sizeof(arr)/sizeof(int);
   
  sort(arr,arr+size,greater<>());//For Reverse :
  cout<<endl;
  for(auto i=0;i!=size;i++)
  {
    cout<<arr[i]<<endl;
  }
    return 0;
}