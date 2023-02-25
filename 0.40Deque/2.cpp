#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> dq({1,2,3,5,8});
  deque<int>::iterator x;
  x=dq.begin();
  x++;
  dq.insert(x,100);
  for( auto x=dq.rbegin();x!=dq.rend();x++)
  {
    cout<<*x<<" ";
  }
    return 0;
}