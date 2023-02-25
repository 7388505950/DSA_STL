#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> lst1({10,20,30,40,50});
    forward_list<int> lst2({100,200,300,400,500});
    lst2.merge(lst1);
    forward_list<int>::iterator x;
    cout<<"The forward_list after merge : "<<endl;
    for(auto x=lst2.begin();x!=lst2.end();x++)
    {
      cout<<*x<<" ";
    }
    return 0;
}