#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> lst1({10,20,30,40});
    forward_list<int> lst2({100,200,300,400});
    forward_list<int> lst3({1,2,3,4});
     forward_list<int> lst4({1000,2000,3000,4000});
    forward_list<int>::iterator x;
    x=lst2.begin();
    lst2.splice_after(lst2.begin(),lst1,lst1.before_begin(),lst1.end());
    for(auto x=lst2.begin();x!=lst2.end();x++)
    {
      cout<<*x<<" ";
    }
    cout<<endl<<endl;
    x=lst3.begin();
    x++;
    x++;//@_______ 2 element forward se 
    lst3.splice_after(x,lst4,lst4.before_begin(),lst4.end());
    for(auto x=lst3.begin();x!=lst3.end();x++)
    {
      cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}