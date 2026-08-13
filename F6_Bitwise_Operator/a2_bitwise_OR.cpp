#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter a and b: ";
  cin >>a>>b;
  /*
  &(bitwise OR) will take binary of both number and do logical operation of OR gate on every bits
  example: (a)2 [a in binary form] = 10011
           (b)2 [b in binary form] = 10010
                    OUTPUT (a & b) = 10011

                    //what it did
                    1 & 1 = 1
                    0 & 1 = 1
                    1 & 0 = 1
                    0 & 0 = 0
  */
  
  cout<<(a | b);
  return 0;
}