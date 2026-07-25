#include<iostream>
using namespace std;
int main(){
  int a,b;
  char op;
  cout<<"Enter value of a and b: ";
  cin >> a,b;
  cin >> op;
  cout<<"Enter your operator (+, -, *, /): ";
  cin >> op;
  if(op == '+') cout<<a+b<<endl;
  else if(op == '-') cout<<a-b<<endl;
  else if(op == '*') cout<<a-b<<endl;
  else if(op == '/'){
    if(b == 0) {
      cout<<"Can't devide by 0"<<endl;
    }
    else{
      cout<<(float)a/b<<endl;
    }
  }
  else{
    cout<<"Invalid operator"<<endl;
  }

  cout<<"Task exicuted";
  return 0;
}