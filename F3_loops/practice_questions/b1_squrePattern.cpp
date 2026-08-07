/*
    1 2 3 4  . . .. n
    1 2 3 4  . . .. n
    1 2 3 4  . . .. n
    . . . .  . . .. n
    . . . .  . . .. n
    1 2 3 4  . . .. n
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number: ";
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
  cout<<"Code executed";
  return 0;
}