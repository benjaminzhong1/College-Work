#include <iostream>
using namespace std;
int main()   
  {
   for(int r=1;r<=5;r++)
    {
      for(int c=1;c<=5;c++)
        {
          if((c+r)%2==0)
            cout<<"* ";
          else
            cout<<"  ";
        }
    cout<<endl;
    } 
  return 0;
  }


//making a checkboard pattern with stairs given a random number of dimensions using if and else loops
//key is identifying the pattern/function to get the stars in each spot in this case the stars land on every square that c+r equals even, 
