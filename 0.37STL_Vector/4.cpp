#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> arr={10,50,70,60,9};
    vector<int> arr2={100};
    arr2.assign(arr.begin(),arr.end());//Needs Range :
    vector<int>::iterator x;
    for(x=arr.begin();x!=arr.end();x++)
    {
        cout<<*x<<endl;
    }
    cout<<"--------------------------"<<endl;
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<endl;
    }
    return 0;
}