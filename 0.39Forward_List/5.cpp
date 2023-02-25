#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>l1;
    l1.assign({100,100,200,200,300,400});
    forward_list<int>::iterator x;
    l1.unique();
    for(auto x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}