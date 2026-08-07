//Inverted Triangles
/*
      1 1 1 1
        2 2 2
          3 3
            4
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number: ";
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<"  ";
    }
    for(int j=0;j<n-i;j++){
      cout<<i+1<<" ";
    }
    cout<<endl;
  }
  cout<<"Code executed";
  return 0;
}