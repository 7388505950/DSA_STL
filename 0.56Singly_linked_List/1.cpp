#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
    public:
    int value;
    node *next;
      node()
      {
        value=0;
        next=NULL;
      }
};
class LinkedList
{
 
  node *head;
  public:
    LinkedList()
    {
        head=NULL;
    }

    void InsertAtend(int v)
    {
        node *temp=new node();
        temp->value=v;
      if(head==NULL)
      {
        head=temp;
      }
      else
        {
        node *t=head;
        while(t->next !=NULL)
        {
            t=t->next;
        }
        t->next=temp;
        }
    }

    void printLL()
    {
       
        node *q=head;
         while(q !=NULL)
         {
            cout<<q->value<<" -> ";
            q=q->next;
         }
         cout<<endl;
    }
    void Check_Present(int v)
    {
        node *st=head;
        while(st !=NULL)
        {
          if(st->value==v)
        {
            cout<<st->value<<" is present "<<endl;
            return;
        }
        st=st->next;
        }
        cout<<v<< " is not present ";
        
    }
};
int main()
{
    LinkedList st;
    st.InsertAtend(14);
    st.InsertAtend(21);
    st.InsertAtend(11);
    st.InsertAtend(30);
    st.InsertAtend(10);
    st.printLL();
    st.Check_Present(14);
    return 0;
}