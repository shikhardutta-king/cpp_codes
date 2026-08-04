//Write code to find rood of number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number: ";
  cin >> n;
  bool isTrue = true;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i == 0){
      isTrue = false;
      break;
    }
  }
  if(isTrue) cout<<"Number "<<n<<" is a prime number"<<endl;
  else cout<<"Number "<<n<<" is not a prime number"<<endl;
  return 0;
}