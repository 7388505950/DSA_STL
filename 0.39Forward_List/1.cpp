#include<iostream>
#include<forward_list>
//#include<iterator>
using namespace std;
int main()
{
    forward_list<int>l1;
    forward_list<int>l2;
    forward_list<int>l3;
    //Method 1 to assign :--> 1
    l1.assign({1,2,3,4,5});
    //Second method to assign :--> 2
    l2.assign(5,15);
    forward_list<int>::iterator x;
    for(auto x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl<<endl;
     for(auto x=l2.begin();x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl<<endl;
    //THird method to assign : 
    l3.assign(l1.begin(),l1.end());
    for(auto x=l3.begin();x!=l3.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl<<endl;
    x=l3.begin();
    x++;
    x++;
    x++;
    x++;
    l3.insert_after(x,{70,80,90});
    for(auto x=l3.begin();x!=l3.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}