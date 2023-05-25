include <iostream>
using namespace std;
int main() 
  {
  for(int r=0;r<7;r++)
    {
      for(int c=0;c<7;c++)
      {
        if(c==r || c==6-r)
          cout<<"*";
        else
          cout<<" ";
      }
    cout<<endl;
    }
  return 0;
  }
