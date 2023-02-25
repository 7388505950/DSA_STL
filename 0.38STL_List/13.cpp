#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char> chr;
    for(int i='a';i<'z';i++)
    {
        chr.push_back(i);
    }
    list<char>::iterator x;
    for(auto x=chr.begin();x!=chr.end();x++)
    {
        cout<< *x <<" ";
    }
    return 0;
}