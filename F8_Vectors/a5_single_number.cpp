#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> vec){
  int a = 0;
  for(int i: vec) a ^= i;
  return a;
}
int main(){
  vector<int> vec;
  int n;
  cout<<"Enter size of your vector: ";
  cin >> n;
  for(int i=0;i<n;i++){
    int num;
    cin >> num;
    vec.push_back(num);
  }
  int result = singleNumber(vec);
  cout<<"Unique value in vector is: "<<result<<endl;
  cout<<"Code executed";
  return 0;
}