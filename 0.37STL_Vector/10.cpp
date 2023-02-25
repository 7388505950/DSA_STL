#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40,50};
    int element;
    cout<<"Enter an Element to Search : ";
    cin>>element;
    vector<int> ::iterator x=find(v1.begin(),v1.end(),element);
    if(x!=v1.end())
    {
        cout<<"Element "<<element<<" Found at Position : ";
        cout<<x-v1.begin()+1;
    }   
    else
    cout<<endl<<"Element : "<<element<<" Not found ";
    return 0;
}