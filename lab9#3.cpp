#include <iostream>
using namespace std;
int main()
  {
    for(int r=1;r<=5;r++)
      {
        for(int c=1;c<=5-r;c++)
          {cout<<"  ";}
        for(int c=1;c<=1;c++)
          {cout<<"* ";}
        cout<<endl;
      }
    return 0;  
  }

//#include <iostream>
//using namespace std;
//int main()   
//  {
//   for(int r=1;r<=5;r++)
//    {
//      for(int c=1;c<=5;c++)
//        {
//         if(c+r==6)
//           cout<<"* ";
//        else
//            cout<<"  ";
//        }
//    cout<<endl;
//    } 
//  return 0;
//  }
