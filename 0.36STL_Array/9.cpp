#include<iostream>
using namespace std;
#include<array>
int Oddarray(array<int,9>b)
{
    int r=0;
    for(int i=0;i<b.size();i++)
    {
      r=r^b[i];
      //cout<<b.size();
    }
    return r;
}

int main()
{
    array<int ,9>a={1,1,5,3,5,6,3,9,6};
    int s=Oddarray(a);
    cout<<s<<endl;
    return 0;
}