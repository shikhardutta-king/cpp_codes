#include<iostream>
using namespace std;
int main(){
  int marks;
  cout<<"Enter your marks: ";
  cin >> marks;
  if(marks >= 90){
    cout<<"A";
  }
  else if(marks < 90 && marks >= 80){
    cout<<"B";
  }
  else if(marks < 80 && marks >= 75){
    cout<<"C";
  }
  else if(marks < 75 && marks >= 60){
    cout<<"D";
  }
  else if(marks < 60 && marks >= 40){
    cout<<"E";
  }
  else if(marks > 100 || marks <0){
    cout<<"Invalid marks";
  }
  else{
    cout<<"Fail";
  }
  return 0;
}