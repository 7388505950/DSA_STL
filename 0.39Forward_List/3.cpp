#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> lst({1,2,3,4,5,6,7,8,9,10});
    int sum=0;
    while(!lst.empty())
    {
      sum=sum+lst.front();
      lst.pop_front();
    }
    cout<<endl<<"Sum of element : "<<sum;
    return 0;
}