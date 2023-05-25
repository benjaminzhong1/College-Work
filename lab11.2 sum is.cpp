#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  srand(time(0));
  int n=rand()%10,product;
  cout<<"generated number: "<<n<<endl;
  for (int i=1;i<=n;i++)
    {
      product=0;
      for(int j=1;j<=i;j++)
        {
          cout<<j<<" ";
          product+=j;
        }
      cout<<"the sum is "<<product<<endl;
    }
  }
