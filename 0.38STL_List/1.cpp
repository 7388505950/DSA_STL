#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void Displaylist(list<int> L)
{
 list<int>::iterator x; 
 for( auto x=L.begin();x!=L.end();x++)
 {
    cout<<*x<<" ";
 }     
 cout<<endl;
};
int main()
{

 list<int> lt={};
 lt.push_back(10);
 lt.push_back(20);
 lt.push_back(30);
 lt.push_front(11);
 lt.push_front(22);
 lt.push_front(33);
 cout<<"After push back Element are : "<<endl;
 Displaylist(lt); 
  list<int>::iterator itt;
  itt=lt.begin();
  itt++;//Needs Location :
  lt.insert(itt,1000);
  lt.insert(itt,2000);
  lt.insert(itt,3000);
  cout<<endl<<"List After inserted : "<<endl;
  Displaylist(lt);
  cout<<endl<<"List of size : "<<lt.size()<<endl;
  lt.sort();
  cout<<"List After sorted : ";
  Displaylist(lt);
  cout<<endl<<"List element after reverse : ";
  lt.reverse();
  Displaylist(lt);
  cout<<endl<<"Remove the element : ";
  lt.remove(3000);
  Displaylist(lt);
  cout<<endl<<"First (front) element of list :"<<lt.front();
  cout<<endl<<"Last (back) element of list : "<<lt.back();
  lt.pop_front();
  lt.pop_back();
  cout<<endl<<"Element After poped (front) and (back) : ";
  Displaylist(lt);
  cout<<endl<<"list in reverse order  with ITERATOR : ";
  list<int>::iterator x;
  for( auto x=lt.rbegin();x!=lt.rend();x++)
  {
     cout<<*x<<" ";
  }
  list<int> lt2;
  lt2.assign(5,100);
  cout<<endl<<"Element after assign (5,100): ";
  Displaylist(lt2);
  lt2.merge(lt);
  cout<<endl<<"List after merge : ";
  Displaylist(lt2);
  lt2.unique();
  cout<<endl<<"List after unique() : ";
  Displaylist(lt2);
  
    return 0;
}