#include<iostream>
using namespace std;
int factorial(int n){
  if(n < 0) return -1;
  int fact= 1;
  for(int i=n;i>0;i--){
    fact*=i;
  }
  return fact;
}
int main(){
  int n;
  cout<<"Enter your number: ";
  cin >> n;
  int fac = factorial(n);
  cout<<"Factorial of number "<<n<<" is: "<<fac;
  return 0;
}