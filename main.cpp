#include <iostream>
#include <cstdlib>
using namespace std;

void basketball(){
int x=15,y=28;
cout<<"\nthe area of a basketball court is "<<x*y<<"\n";
cout<<"the perimenter of a basketball court is "<<(2*x)+(2*y)<<"\n\n";
}

void one(int x, int y){
cout<<"x+y is "<<x+y<<"\n";
cout<<"y-x is " <<y-x<<"\n";
cout<< "x*y is "<<x*y<<"\n";
cout<<"(x+y)/2 " <<(x+y)/2<<"\n";
cout<<"x%y is "<<x%y<<"\n\n";
}

int reverse(int x){
  
  if (x<10){
    cout<<x<<"\n\n";
    return 0;
  }
  
  else 
   cout<<x%10;
  
  return reverse(x/10);
}

void heightcm(double x){
  cout<<2.54*x<<"cm\n";
}

int main(){

  basketball();
  
  int x,y,z,weight;
  double height;
  
  cout<<"enter two variables x and y: ";
  cin>>x>>y;
  one(x,y);
  
  cout<<"enter a 4 digit integer:";
  cin>>z;
  reverse(z);
  
  cout<<"enter your height in inches: ";
  cin>>height;
  heightcm(height);
  
  return 0;
  }

// how to make this work if the users input numbers with decimal places part of question 1
// how to end my code without doing a 'return 0'
// how to make the basketball function return both values without doing a return 0