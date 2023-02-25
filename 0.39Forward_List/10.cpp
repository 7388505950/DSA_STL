#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> lst1;
    forward_list<int> lst2;
    lst1.assign(5,300);
    lst2.assign(lst1.begin(),lst1.end());
    for(int i:lst1)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    for(int i:lst2)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}