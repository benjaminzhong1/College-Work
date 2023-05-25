#include <iostream>
using namespace std;
double square(double x)
  {
    double ans=x*x;
    return ans;
  }
int main() 
  {
  int x=0;
  cout<<"enter a value you want squared\n";
  cin>>x;
  cout<<square(x)<<endl;
  return 0;
  }
