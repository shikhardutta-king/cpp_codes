#include<iostream>
#include<math.h>
using namespace std;
bool checkPrime(int n){
  if(n < 2) return false;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i == 0) return false;
  }
  return true;
}
int main(){
  int n;
  cout<<"Enter number: ";
  cin >> n;
  if(!checkPrime(n) && n < 2) cout<<"Number bellow 2 can not be prime"<<endl;
  else if(checkPrime(n)) cout<<"Number "<<n<<" is a prime number"<<endl;
  else cout<<"number "<<n<<" is not a prime number"<<endl;

  cout<<"Code executed";
  return 0;
}