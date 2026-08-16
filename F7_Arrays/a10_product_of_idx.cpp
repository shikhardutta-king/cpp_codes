#include<iostream>
using namespace std;
int productOfIdx(int arr[],int size){
  int mul = 1;
  for(int i=0;i<size;i++){
    mul *= arr[i];
  }
  return mul;
}
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin >> n;
  cout<<"Enter element of array: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int mul = productOfIdx(arr,n);
  cout<<"Product of all elements in array : "<<mul<<endl;
  cout<<"Code executed";
  return 0;
}