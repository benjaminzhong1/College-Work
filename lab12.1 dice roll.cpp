#include <iostream>
#include <cstdlib>
using namespace std;
int main()   
  {
    int x;
      cout<<"enter a how many times you want to roll a 6 sided die"<<endl;
      cin>>x;
    srand(time(0));
    for(int c=1;c<=x;c++)
      {
        cout<<"Roll "<<c<<": "<<rand()%6+1<<endl;
      }
    cout<<endl;
    return 0;
  }


//6 sided die
