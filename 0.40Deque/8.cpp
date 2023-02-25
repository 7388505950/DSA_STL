#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> dq({1,2,3,5,8});
  deque<int>::iterator x;
   cout<<endl<<"Before removing element : ";
  for(x=dq.begin();x!=dq.end();x++)
  {
    cout<<*x<<" ";
  }
  cout<<endl<<"After removing element : ";
   x=dq.begin();
  x++;
   dq.erase(x);//------------------
   for(x=dq.begin();x!=dq.end();x++)
  {
    cout<<*x<<" ";
  }
    return 0;
}