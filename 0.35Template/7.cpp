#include<iostream>
#include<string>
using namespace std;
class Shape
{
    string shape;
   public:
   Shape(){};
   Shape(string s){shape=s;}
   void setshape(string s){shape=s;}
   string getshape(string s){ return shape;}

};
template<class T>
class Area:public Shape
{
  Area(){};
  Area(T r){return 3.14*r*r};
};
int main()
{
   Shape a1;
   a1.setshape(triangle);fjtyuud
    return 0;
}