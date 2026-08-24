#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of vector: ";
  cin >> n;
  vector<int> vec;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    vec.push_back(a);
  }
  int num;
  cout<<"Enter the number you want to search: ";
  cin >> num;
  for(int i=0;i<sizeof(vec)/sizeof(int);i++){
    if(vec.at(i) == num){
      cout<<"Number "<<num<<" found at index: "<<i<<endl;
    }
  }
  cout<<"Code executed";
  return 0;
}