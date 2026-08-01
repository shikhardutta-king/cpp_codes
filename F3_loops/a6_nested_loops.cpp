#include<iostream>
using namespace std;
int main(){
  /*
  print this pattern
        *
       * *
      * * *
     * * * *
      till n  number of lines 
  */
  cout<<"Enter a number";
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}