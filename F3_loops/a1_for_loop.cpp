#include<iostream>
using namespace std;
int main(){
  // To repeat one process until we desire
  // ---- FOR LOO ----
  int n;
  cout<<"To print even number upto you want"<<endl;
  cout<<"Enter your number : ";
  cin >> n;
  for(int i=1;i<=n/2;i++){
    cout<<i*2<<endl;
  }
  cout<<"Code executed";
  return 0;
}