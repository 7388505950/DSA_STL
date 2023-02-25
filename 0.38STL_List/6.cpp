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
    for(x=lst1.begin();x!=lst1.end();x++)
    {
       cout<<*x<<" ";
    }
    cout<<endl<<"First Element is : "<<lst1.front();
   cout<<endl<<"Last Element is : "<<lst1.back();
    return 0;
}