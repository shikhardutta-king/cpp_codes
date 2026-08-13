//To print Febonacci serice till n
// 0 1 1 2 3 5 8 13 21 34 55 ....
// basicly 1st value will be 0, 2nd will be 1 and rest will be the sum of last 2 values
#include<iostream>
using namespace std;
void Fibonacci(int n){
  if(n < 0){
    cout<<"Fibonacci serice is for number above 0"<<endl;
    return;
  }
  cout<<"0 1 ";
  int a =0, b=1;
  for(int i=1;i<n-1;i++){
    cout<<a+b<<" ";
    int temp = a+b;
    a = b;
    b = temp;
  }
}
int main(){
  int n;
  cout<<"Enter your number:";
  cin>>n;
  Fibonacci(n);
  cout<<"Code executed";
  return 0;
}