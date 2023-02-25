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
  for(x=dq.begin();x!=dq.end();x++)
  {
    cout<<*x<<" ";
  }
    return 0;
}//Same as Q::2-------;