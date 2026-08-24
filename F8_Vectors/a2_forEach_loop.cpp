#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vec = {1,2,3,4,5};
  // for each loop
  cout<<"For integer type vector: "<<endl;
  for(int i : vec){  //here i will contain value of index insted of index
    cout<<i<<" ";
  }
  cout<<endl;
  vector<char> vecChar = {'a','b','c','d','e'};
  cout<<"Now for character type vector"<<endl;
  for(char i : vecChar){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Code executed";
  return 0;
}