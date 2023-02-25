#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float> v;
    v.push_back(12.45);
    v.push_back(26.5);
    v.push_back(2.45);
    v.push_back(22.45);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}