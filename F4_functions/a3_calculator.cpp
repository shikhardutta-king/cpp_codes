#include<iostream>
using namespace std;
float sum(float a,float b){
  return a+b;
}
float subtract(float a,float b){
  return a-b;
}
float multiply(float a,float b){
  return a*b;
}

float divide(float a,float b){
  if(b == 0){
    cout<<"Can not devide by 0"<<endl;
    return 0;
  }
  return a/b;
}
int main(){
  float a,b;
  cout<<"Enter a: ";
  cin >> a;
  cout<<"Enter b: ";
  cin >> b;
  char op;
  cout<<"Enter you operator (+, -, *, /): ";
  cin >> op;
  float result = 0;
  if(op == '+') result = sum(a,b);
  else if(op == '-') result = subtract(a,b);
  else if(op == '*') result = multiply(a,b);
  else if(op == '/') result = divide(a,b);
  else cout<<"Invalid Operator"<<endl;
  cout<<result<<endl;
  cout<<"Code executed";
  return 0;

}