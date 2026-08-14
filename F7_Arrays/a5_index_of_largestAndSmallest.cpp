#include<iostream>
int main(){
  int n;
  std::cout<<"Enter size of your array: ";
  std::cin>> n;
  int arr[n];
  std::cout<<"Enter value of your array: ";
  for(int i=0;i<n;i++){
    std::cin>> arr[i];
  }
  int big = 0;
  int small = 0;
  for(int i=0;i<n;i++){
    if(arr[big] <= arr[i]) big = i;
    if(arr[small] >= arr[i]) small = i;
  }
  std::cout<<"Smallest number index: "<<small<<std::endl;
  std::cout<<"Largest number index: "<<big<<std::endl;
  std::cout<<"Code executed";
  return 0;
}