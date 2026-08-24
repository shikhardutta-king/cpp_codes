#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec;
  int n;
  cout<<"Enter size of vector: ";
  cin >> n;
  for(int i=0;i<n;i++){
    int num;
    cin >> num;
    vec.push_back(num);
  }
  
}