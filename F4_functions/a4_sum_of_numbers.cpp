#include<iostream>
using namespace std;
int sumOf(int a){
  // return (a*(a+1))/2;  //we can use this 
  //but using for loop is more understandable
  int sum = 0;
  for(int i=1;i<=a;i++){
    sum += i;
  }
  return sum;
}
int main(){
  int n;
  cout<<"Enter you number: ";
  cin >> n;
  int sum = sumOf(n);
  cout<<"sum from 1 to "<<n<<" is: "<<sum;
  return 0;
}