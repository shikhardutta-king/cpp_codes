// Sum of number from 1 to n
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number: ";
  cin >> n;
  int sum = 0;
  //in for loop
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  cout<<"Using for loop sum: "<<sum<<endl;
  
  //Now using while loop
  sum = 0;
  int i = 1;
  while(i<=n){
    sum+= i;
    i++;
  }
  cout<<"Using while loo sum: "<<sum<<endl;
  return 0;
}