#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> arr1={10,80,100,30,4};
     int sum=accumulate(arr1.begin(),arr1.end(),0);
     cout<<endl<<"Sum of vector Element : "<<sum<<endl;
    return 0;
}