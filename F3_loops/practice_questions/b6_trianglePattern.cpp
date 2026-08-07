/*
      1
      2 1
      3 2 1
      4 3 2 1
      5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<i-j+1<<" ";
    }
    cout<<endl;
  }
  cout<<"Code executed";
  return 0;
}