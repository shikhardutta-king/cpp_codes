//To print number till n 
#include<iostream>
#include<math.h>
using namespace std;
void printPrime(int n){
  // cout<<"Somthing"<<endl;
  if(n < 2){
    cout<<"Number bellow 2 can not be prime"<<endl;
    return;
  }
  bool isPrime;
  // cout<<"hello world"<<endl;
  for(int i=2;i<=n;i++){
    isPrime = true;
    for(int j=2;j<=sqrt(i);j++){
      // cout<<"Inside j"<<endl;
      if(i%j == 0){
        isPrime = false;
        break;
      }
    }
    // cout<<"Indise i"<<endl;
    if(isPrime) cout<<i<<" ";
  }
  cout<<endl;
}
int main(){
  int number;
  cout<<"Enter number: ";
  cin>> number;
  printPrime(number);
  cout<<"Code executed";
  return 0;
}