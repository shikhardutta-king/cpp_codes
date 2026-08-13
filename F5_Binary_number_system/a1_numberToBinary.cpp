//Only for positive numbers
#include<iostream>
using namespace std;
long long numToBin(int n){
  long long bin = 1;
  while(n != 0){
    if(n%2 == 0) bin *= 10;
    else bin = bin*10+1;
    n /= 2;
  }
  // cout<<bin<<endl;
  long long result = 0;
  while(bin != 1){
    result = result * 10 + bin%10;
    bin /=10;
  }
  return result;
}

int main(){
  int n;
  cin >> n;
  long long bin = numToBin(n);
  cout<<bin;
  return 0;
}