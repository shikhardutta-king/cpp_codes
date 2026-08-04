//print first n number of odd and n number of even number from 1
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter you number"<<endl;
  cin >> n;
  cout<<"First "<<n<<" even number are: "<<endl;
  for(int i=1;i<=n;i++){
    cout<<i*2<<" ";
  }
  cout<<endl<<"First "<<n<< " odd numbers are: "<<endl;
  for(int i=1;i<=n;i++){
    cout<<i*2-1<<" ";
  }
  cout<<endl<<"Code Executed";
  return 0;
}