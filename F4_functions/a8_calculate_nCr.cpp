//calculate binomial cofficient
/*
    --- FORMULA ----
    nCr = (n!)/(r!*(n-r)!)
*/
#include<iostream>
using namespace std;
//first calculate factorial
int factorial(int n){
  if(n < 0) return -1;
  int fact = 1;
  for(int i=1;i<=n;i++){
    fact *= i;
  }
  return fact;
}
int calculate_nCr(int n,int r){
  if(r > n || r < 0) return -1;
  int n_fact = factorial(n);
  int r_fact = factorial(r);
  int n_r_fact = factorial(n-r);
  int result = n_fact/(r_fact*n_r_fact);
  return result;
}
int main(){
  int n,r;
  cout<<"Enter n: ";
  cin>> n;
  cout<<"Enter r: ";
  cin>>r;
  int nCr = calculate_nCr(n,r);
  if(nCr < 1) cout<<"Invalid input!"<<endl<<"Input can't be negative"<<endl;
  else cout<<n<<"C"<<r<<" : "<<nCr<<endl;
  cout<<"Code executed";
  return 0;
}