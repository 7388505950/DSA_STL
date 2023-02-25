#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string> lst1;
    list<string>::iterator x;
    string str;
    while(true)
    {
     cout<<endl<<"Enter any string or yo Quit exit : ";
     getline(cin,str);
       if(str=="exit")
       break;
       lst1.push_back(str);
    }
    cout<<endl<<"List element are : ";
    for( auto x=lst1.rbegin();x!=lst1.rend();x++)
    {
       cout<<*x<<" ";
    }
    return 0;
}