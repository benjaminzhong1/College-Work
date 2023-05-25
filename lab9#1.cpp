#include <iostream>
using namespace std;
int main() {
  for(int r=5;r>=1;r--)
    {
      for(int c=1;c<=r;c++)
        {cout<<"* ";}
      cout<<endl;
    }
  return 0;
}


// r=5 and r>=1 and r-- if you want the triangle to start at the bottom
// r=1 and r<=5 and r++ if you want the triangle to start at the top
// set c=1 and c=r if you want to make a triangle
