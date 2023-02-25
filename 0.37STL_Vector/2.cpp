#include<iostream>
#include<vector>
using namespace std;
int main()
    {
        vector<int>v={};
        v.push_back(100);
         v.push_back(200);
          v.push_back(300);
           v.push_back(400);

       vector<int>::iterator x;
       for( x=v.begin();x!=v.end();x++)
       {
         cout<<*x<<endl;
       }
        return 0;
    }
