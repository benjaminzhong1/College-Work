#include <iostream>
using namespace std;

int main() {
  for(int r=6, s=5 ; r>=1 ; r--, s++){
    for(int c=1 ; c<=10 ; c++){
      if(c>r & c<=s){cout <<"*";}
      else{(cout <<" ");}
      }
    cout << " " << endl;
}
  return 0;
  }
