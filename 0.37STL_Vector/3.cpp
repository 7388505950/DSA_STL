#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v3={};
int s;
cout<<"Enter 0 to stop add element :"<<endl;
cout<<"Append any other Numbers : "<<endl;
cin>>s;
    while(s)
    {
        v3.push_back(s);
        cout<<"Enter 0 to stop add element :"<<endl;
         cout<<"Append any other Numbers : "<<endl;
         cin>>s;
    }
    for(auto i:v3)
    {
      cout<<i<<endl;
    }
    return 0;
}