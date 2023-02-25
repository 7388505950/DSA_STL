#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={10,20,50,35,13};
    vector<int>::iterator x;
    for(auto x=v.begin();x!=v.end();x++)
    {
     cout<<*x<<endl;
    }
    cout<<endl<<"---------------"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}