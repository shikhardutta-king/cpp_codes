#include<iostream>
using namespace std;
int placeValue(int idx){
  if(idx == 0) return 1;
  if(idx < 0) return -1;
  return 2*placeValue(--idx);
}
int binToNum(long n){
  int result = 0;
  int idx = 0;
  while(n != 0){
    if(n%10 == 1){
      int value = placeValue(idx);
      result += value;
    }
    idx++;
    n /= 10;
  }
  return result;
}
int main(){
  long n;
  cout<<"Enter your binary: ";
  cin >> n;
  int number = binToNum(n);
  cout<<"Number of "<<n<<" in base 10 is: "<<number<<endl;
  cout<<"Code executed";
  return 0;
}