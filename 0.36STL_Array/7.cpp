#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={50,60,30,40,5,4};
  // sort(arr.front(),arr.back());
  // cout<<arr.sort();
   int size=sizeof(arr)/sizeof(int);
   cout<<sizeof(arr)<<endl;
   cout<<endl<<size<<endl;
  sort(arr,arr+size);
  cout<<endl;
  for(auto i=0;i!=size;i++)
  {
    cout<<arr[i]<<endl;
  }
    return 0;
}