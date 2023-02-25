#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> dq({1,2,3,5,8});
  cout<<endl<<"First Element : "<<dq.front();
  cout<<endl<<"Last Element  : "<<dq.back();
    return 0;
}