/*
      1
      2 2
      3 3 3
      4 4 4 4
      5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter out number: ";
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<i+1<<" ";
    }
    cout<<endl;
  }
  cout<<"Code executed";
  return 0;
}