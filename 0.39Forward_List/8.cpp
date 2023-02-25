#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> lst1({3,2,9});
    forward_list<int> lst2({8,1,2});
    lst1.sort();
    lst2.sort();
    lst2.swap(lst1);
    forward_list<int>::iterator x;
    cout<<"The forward_list after swap : "<<endl;
    for(auto x=lst2.begin();x!=lst2.end();x++)
    {
      cout<<*x<<" ";
    }
    return 0;
}