#include<iostream>
using namespace std;
void findIntersection(int arr1[],int arr2[],int size1,int size2){
  for(int i=0;i<size1;i++){
    // bool isTrue = false;
    for(int j=0;j<size2;j++){
      // if(arr1[i] == arr2[j]) isTrue = true;
      if(arr1[i] == arr2[j]) cout<<arr1[i] <<" ";
    }
    // if(isTrue) cout<<arr1[i] <<" ";
  }
  cout<<endl;
}
int main(){
  int n,m;
  cout<<"Enter size of 1st array: ";
  cin >> n;
  int arr1[n];
  for(int i=0;i<n;i++){
    cin >> arr1[i];
  }
  cout<<"Enter size of 2nd array: ";
  cin >> m;
  int arr2[m];
  for(int i=0;i<m;i++){
    cin >> arr2[i];
  }
  findIntersection(arr1,arr2,n,m);
  cout<<"Code executed";
  return 0;
}