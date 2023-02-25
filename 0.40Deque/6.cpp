#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> dq1({1,2,3,5,8});
  deque<int> dq2({10,20,30,50,80});
  deque<int>::iterator x;
  dq2.assign(dq1.begin()+1,dq1.end());
  for(x=dq2.begin();x!=dq2.end();x++)
  {
    cout<<*x<<" ";
  }
    return 0;
}