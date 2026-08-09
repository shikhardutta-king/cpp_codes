#include<iostream>
using namespace std;

//take two parameter as input and perform operations and return desired output 
int sum(int a,int b){
  return a+b;
}

//return menimum of 2 value
int minOfTwo(int a,int b){
  if(a>b) return b;
  return a;
}
int main(){
  int a,b;
  cout<<"Enter a: ";
  cin>>a;
  cout<<"Enter b: ";
  cin>>b;
  int mi = minOfTwo(a,b);
  cout<<"Minimum of "<<a<<" and "<<b<<" is: "<<mi<<endl;
  int add = sum(a,b);
  cout<<"Sum of a and b: "<<add<<endl;

  cout<<"Code executed";
  return 0;
}