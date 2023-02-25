#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
int main()
{
    vector<int>arr={20,30,40,50,60};
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}