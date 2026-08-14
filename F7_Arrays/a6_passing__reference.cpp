#include<iostream>
using namespace std;
void modifyArray(int arr[],int size){
  //adding one in every index of array
  for(int i=0;i<size;i++){
    arr[i]++;
  }
}
int main(){
  int arr[] = {1,2,3,4,5};
  //by default in cpp, array is stored in pointers
  //so by passing array in a function, and changing anything in array in functino will affect 
  //orignal array
  cout<<"Before passing array in function :"<<endl;
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  modifyArray(arr,sizeof(arr));
  cout<<"After passing array in function which incriment 1 in every index: "<<endl;
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Code executed";
  return 0;
}