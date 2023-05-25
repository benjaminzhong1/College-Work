#include <iostream>
using namespace std;
int main() {
  for (int r=1; r<=8; r++){
    for(int c=1; c<=8; c++){
      if ((r+c)%2==0)cout<<" x ";
        else cout<<" 0 ";
    }
    cout << endl;
  }
  return 0;
}
