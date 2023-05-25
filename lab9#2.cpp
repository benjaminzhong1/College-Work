#include <iostream>
using namespace std;
int main()
  {
    for(int r=1;r<=5;r++)
      {
        for(int c=1;c<=5-r;c++)
          {cout<<"  ";}
        for(int c=1;c<=r;c++)
          {cout<<"* ";}
        cout<<endl;
      }
    return 0;  
  }



//making a 5x5 triangle but it's angled towards the left instead of the right
