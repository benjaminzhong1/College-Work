#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
  {
  srand(time(0));
  int c=0;
  while(c<5)
    {
    int flip=rand()%2;
    if(flip%2==1)c++;
    cout<<flip<<" ";
    }
  cout<<endl;
  return 0;
  }
