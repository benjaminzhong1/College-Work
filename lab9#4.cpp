#include <iostream>
using namespace std;
int main() 
  {
  for(int r=1;r<=5;r++)
    { 
     for(int c=1;c<=5;c++)
        {
        if(c==r||c==6-r)
          cout<<"* ";
        else
          cout<<"  "; 
        }
      cout<<endl;
    }
  return 0;
  }

//making an x given any dimensions length with *'s'
