#include<iostream>
#include<vector>
using namespace std;

int main(){
  //Functions 
  vector<int> vec = {11,22,33,44,55,66};
  //1. size
  cout<<"Size of vector: "<<vec.size()<<endl;

  //2. push_back
  // It push integer at the back of vector
  vec.push_back(77);
  for(int i: vec){
    cout<<i<<" ";
  }
  cout<<endl;

  //3. pop_front
  // It delete last value of vector
  vec.pop_back();
  for(int i: vec) cout<<i<<" ";
  cout<<endl;

  //4. front
  // This function return value at 0th index of vector
  cout<<vec.front()<<endl;

  //5. back
  // This function return value at the last index of the vector
  cout<<vec.back()<<endl;

  //6. at
  // This function return value of vector at a index
  cout<<vec.at(2)<<endl;  //we are printing element at index 2 of vector vex

  cout<<"Code executed";
  return 0;
}