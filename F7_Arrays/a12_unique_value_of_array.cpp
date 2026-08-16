#include<iostream>
#include<array>
using namespace std;
void unique(int arr[],int size){
  
  for(int i=0;i<size;i++){
    bool isTrue = true;
    // cout<<arr[i]<<endl;
    for(int j=0;j<size;j++){
      if(i == j) continue;
      if(arr[i] == arr[j]){
        isTrue = false;
        break;
      }
    }
    // cout<<"Hello world";
    if(isTrue) cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  unique(arr,n);
  cout<<"Code executed";
  return 0;
}