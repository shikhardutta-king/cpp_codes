#include<iostream>
using namespace std;
int main(){
  int marks[5];
  for(int i=0;i<sizeof(marks)/sizeof(int);i++){
    cin >> marks[i];
  }
  cout<<"Your array: ";
  for(int i=0;i<sizeof(marks)/sizeof(int);i++){
    cout<<marks[i]<<" ";
  }
  cout<<endl<<"Code executed";
  return 0;
}