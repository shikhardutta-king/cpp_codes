#include<iostream>
using namespace std;
void swap(int a,int b){
  int temp = a;
  a = b;
  b = temp;
  cout<<"Inside swap function"<<endl;
  cout<<"a = "<<a<<" b = "<<b<<endl;
}
int main(){
  int a,b;
  cout<<"Enter value of a and b: ";
  cin >> a;
  cin >> b;
  swap(a,b);
  //we passed value so real value of a and b remain unchanges
  cout<<endl<<"In main function:"<<endl;
  cout<<"a = "<<a<<" b = "<<b;
  return 0;

}