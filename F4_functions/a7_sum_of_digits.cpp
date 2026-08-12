#include<iostream>
using namespace std;
int sumOfDigit(int n){
  int sum = 0;
  while(n != 0){
    sum += n%10;
    n/=10;
  }
  return sum;
}
int main(){
  int n;
  cout<<"Enter your number: ";
  cin>>n;
  int sum = sumOfDigit(n);
  cout<<"Sum of digits of number "<<n<<" is: "<<sum;
  return 0;
}