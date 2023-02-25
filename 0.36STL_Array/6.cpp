  #include<iostream>
  #include<array>
  using namespace std;
  int main()
  {
    array <int,5>arr3={100,200,300,400,500};
    array <int,0>arr4;
    if(arr3.empty())
    {
        cout<<endl<<"The array is empty : ";
    }
    else
    {
        cout<<endl<<"array is not empty :";
        cout<<endl<<arr3.size();
    }
    cout<<endl<<"---------------------------";
    if(arr4.empty())
    {
        cout<<endl<<"The array is empty : ";
    }
    else
    {
        cout<<endl<<"array is not empty :";
        cout<<endl<<arr4.size();
    }
    return 0;
  }