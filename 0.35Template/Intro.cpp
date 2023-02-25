#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
    int ar[100]={1,2,3,4,5};//  C -Style
    cout<<endl<<"-1--at()-------------------"<<endl;
    array <int,5>arr={10,20,30,40,50};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<endl;
        
    }
    cout<<endl<<"-2-get()--------------------"<<endl;
    cout<<get<0>(arr)<<endl;
    cout<<get<1>(arr)<<endl;
    cout<<get<2>(arr)<<endl;
    cout<<get<3>(arr)<<endl;
    cout<<get<4>(arr)<<endl;
    
    cout<<endl<<"-3-[]--------------------"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
        
    }
    cout<<endl<<"-4-front()--------------------"<<endl;
    cout<<"First Element : "<<arr.front();
    cout<<endl<<"-5-back()--------------------"<<endl;
    cout<<"last element : "<<arr.back();
    cout<<endl<<"-6-size()--------------------"<<endl;
    cout<<arr.size();
    cout<<endl<<"-7-max_size()--------------------"<<endl;
    cout<<arr.max_size();
    cout<<endl<<"-8-swap()--------------------"<<endl;
    array <int,5>arr2={100,200,300,400,500};
    arr.swap(arr2);
    cout<<"After swapping : arr :--> "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<endl;
        
    }
    cout<<"After swapping : arr2 :--> "<<endl;
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2.at(i)<<endl;
        
    }
    cout<<endl<<"-9-empty()--------------------"<<endl;
    if(arr.empty())
    {
      cout<<"Array is  empty : ";
    }
    else
    cout<<"Array is  not empty : ";
    cout<<endl<<"-10-fill()--------------------"<<endl;
    arr.fill(1000);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
        
    }
    return 0;
}