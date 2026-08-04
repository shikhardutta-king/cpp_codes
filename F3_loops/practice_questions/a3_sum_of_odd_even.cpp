//Print sum of first n number of odd and even number from 1
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin >> n;
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += i*2;
  }
  cout<<"Sum of first n even number are: "<<sum<<endl;
  sum = 0;
  for(int i=1;i<=n;i++){
    sum += i*2-1;
  }
  cout<<"Sum of first n odd number are: "<<sum<<endl;
  cout<<"Code executed";
  return 0;
}