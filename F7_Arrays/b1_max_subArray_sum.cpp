// //Kadane's Algorithm
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int maxSubArraySum(int arr[] , int n){
//   int maxSum = INT_MIN;
//   int crr = 0;
//   for(int i=0;i<n;i++){
//     crr += arr[i];
//     maxSum = max(crr,maxSum);
//     if(crr < 0){
//       crr = 0;
//     }
//   }
//   return maxSum;
// }
// int main(){
//   int n;
//   cout<<"Enter size of array: ";
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int sum = maxSubArraySum(arr,n);
//   cout<<"Max sum: "<<sum<<endl;
//   cout<<"Code executed";
//   return 0;
// }
#include <iostream>
#include <algorithm> // Required for std::max
#include <vector>    // Recommended for standard dynamic arrays
#include <climits>   

using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int crr = 0;
    
    for (int i = 0; i < n; i++) {
        crr += arr[i];
        // Use std::max explicitly
        maxSum = std::max(crr, maxSum);
        
        if (crr < 0) {
            crr = 0;
        }
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid size" << endl;
        return 1;
    }

    // Use vector for standard C++ dynamic sizing
    vector<int> arr(n);
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pass vector data as array
    int sum = maxSubArraySum(arr.data(), n);
    
    cout << "Max sum: " << sum << endl;
    cout << "Code executed";
    return 0;
}   