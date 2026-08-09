/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=n-i-1;j>0;j--){
      cout<<"  ";
    }
    for(int j=0;j<=i;j++){
      cout<<j+1<<" ";
    }
    for(int j=i;j>0;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  cout<<"Code executed";

  return 0;
}