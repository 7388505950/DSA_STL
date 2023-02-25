#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
void Displaylst(list<int> L)
{
    list<int>::iterator x;
    for(auto x=L.begin();x!=L.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> lst1;
    list<int> lst2;
    list<int> lst3;
    list<int> lst4;
    lst1.assign(5,10);
    cout<<endl<<"Size of lst 1 : "<<lst1.size();
    cout<<endl<<"Elements are : ";
    Displaylst(lst1);
                 // Second method --------->
    lst2.assign(lst1.begin(),lst1.end());             
    cout<<endl<<"Size of lst 2 : "<<lst2.size();
    cout<<endl<<"Elements are : ";
    Displaylst(lst2);
       //Third method ------------------>
    int arr[]={100,200,300,400};
    lst3.assign(arr,arr+4);
    cout<<endl<<"Size of lst 3 : "<<lst3.size();
    cout<<endl<<"Elements are : ";
    Displaylst(lst3);   
    return 0;
}