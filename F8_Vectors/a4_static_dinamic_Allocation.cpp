#include<iostream>
#include<vector>
using namespace std;
int main(){
  // Dinamicly created memory of 3 bytes in memory on compile time
  vector<int> vec = {1,2,3};
  cout<<vec.size()<<endl;

  //this will dinamicly create an array of double size to store this value
  vec.push_back(4);
  cout<<vec.size()<<endl;
  cout<<"Code executed";
  return 0;
}