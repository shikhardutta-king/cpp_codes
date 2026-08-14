//time complexity of leanear search is O(N)
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int find){
  for(int i=0;i<size;i++){
    if(arr[i] == find) return i;
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter size of youre array:";
  cin >> n;
  cout<<"Enter value of your array: ";
  int arr[n];
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cin >> arr[i];
  }
  int find;
  cout<<"Enter the number your want to find: ";
  cin >> find;
  int idx = linearSearch(arr,sizeof(arr),find);
  if(idx != -1) cout<<"Index of your value is: "<<idx<<endl;
  else cout<<"number does not exist in array"<<endl;

  cout<<"Code executed"<<endl;

  return 0;
}