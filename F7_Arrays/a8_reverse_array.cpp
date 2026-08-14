#include<iostream>
using namespace std;
void reverse(int arr[],int size){
  int i=0,j=size-1;
  while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}
int main(){
  int n;
  cout<<"Enter size of your array: ";
  cin >> n;
  int arr[n];
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cin >> arr[i];
  } 
  cout<<"Before reversing: ";
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<" ";
  }
  reverse(arr,sizeof(arr)/sizeof(int));
  cout<<endl;
  cout<<"After reversing: ";
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Code executed";
  return 0;
}