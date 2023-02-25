#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={50,10,150,23,560,19};
    vector<int> v2={50,80,70,45,66,10,19};
    vector<int> v3(v1.size()+v2.size());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int> ::iterator x,end;
    end=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    cout<<"Common Element between v1 and v2 is v3 : "<<endl;
    for(x=v3.begin();x!=end;x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}