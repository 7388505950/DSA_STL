#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr3={};
    arr3.push_back(300);
    arr3.push_back(900);
    arr3.push_back(400);
    arr3.push_back(800);
    arr3.push_back(400);
    cout<<"The maximum element : ";
    cout<<*max_element(arr3.begin(),arr3.end())<<endl;
    cout<<"The minimum element is : ";
    cout<<*min_element(arr3.begin(),arr3.end());
    return 0;
}