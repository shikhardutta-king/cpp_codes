#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of your arrah: ";
  cin >> n;
  int arr[n];
  cout<<"Enter value of your array: "<<endl;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int big = arr[0];
  for(int i=0;i<n;i++){
    big = max(arr[i],big);
  }
  cout<<"Largest number in array: "<<big<<endl;
  cout<<"Code executed";
  return 0;
}