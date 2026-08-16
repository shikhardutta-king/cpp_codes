#include<iostream>
using namespace std;
int sumOfIdx(int arr[],int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  return sum;
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
  int sum = sumOfIdx(arr,n);
  cout<<"Sum of all elements in array : "<<sum<<endl;
  cout<<"Code executed";
  return 0;
}