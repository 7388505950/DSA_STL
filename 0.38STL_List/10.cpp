#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    list<int> lst1={10,20,30,40,50,60};
    list<int> lst2={100,200,300,400,500,600};
    list<int> lst3;
     list<int>::iterator x;
     cout<<endl<<"First list :";
    for(auto x=lst1.begin();x!=lst1.end();x++)
    {
        cout<<*x<<" ";
    }
    lst1.merge(lst2);
    cout<<endl<<"List after Merge : ";
    for(auto x=lst1.begin();x!=lst1.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}