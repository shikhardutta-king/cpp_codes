//Functions is use to reducre "Redendency" and avoide unnessasury code
// write onece and use manytimes
#include<iostream>
using namespace std;
//this is out function 
void printHello(){
  cout<<"Hellow world"<<endl;
}

int main(){
  //we can call this function as much time we want
  printHello();
  //printing this 2nd time
  printHello();

  return 0;
}