#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  srand(time(0));
  int n=rand()%20+1,sum;
  cout<<"generated number "<<n<<endl;
  for (int i=1;i<=n;i++)
    {
      sum=0;
      for(int j=1;j<=i;j++)
        {
          cout<<j<<" ";
          sum+=j;
        }
      cout<<"the sum is "<<sum<<endl;
    }
}
