#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter your alphabet: ";
  cin >> ch;
  if(ch >= 'a' && ch <='z'){
    cout<<ch<<" is a lower case letter";
  }
  else if(ch >= 'A' && ch <= 'Z'){
    cout<<ch<<" is a upper case letter";
  }
  else{
    cout<<"Invalid alphabet";
  }
  cout<<endl<<"Code executed";
  return 0;
}