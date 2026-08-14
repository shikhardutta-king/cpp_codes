//to find smallest number in array
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int size;
  cout<<"Enter size of your array: ";
  cin>>size;
  int marks[size];
  for(int i=0;i<sizeof(marks)/sizeof(int);i++){
    cin >> marks[i];
  }
  //Given function in c++ to find minimum value in array
  int smallest = marks[0];
  for(int i=0;i<sizeof(marks)/sizeof(int);i++){
    // cout<<smallest<<" ";
    smallest = min(marks[i],smallest);
  }
  cout<<"Smallest number in array is: "<<smallest<<endl;
  cout<<"Code executed";
  return 0;
}