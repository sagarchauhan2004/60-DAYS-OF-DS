// 1. Problem: Counting Sort Implementation

// Problem Statement:
// Implement the counting sort algorithm to sort an array of integers.

// Input:
// An array of integers.

// Output:
// The sorted array.

// Example:
// Input:
// [5, 3, 8, 2, 7, 1, 6, 4]
// Output:
// [1, 2, 3, 4, 5, 6, 7, 8]
#include<iostream>
using namespace std;

int main()
{
// L > R wrong order
// n - 1 iterations before er get out sorted array.
  int n;
  cout<<"enter the size : ";
  cin>>n;

  int arr[n];
  cout<<"enter the numbers : ";
  for(int i = 0; i < n; i++ ){
    cin>>arr[i];
  }

  int counter = 1;
  while(counter < n-1){
    for(int i = 0; i < n -counter; i++ ){
        if(arr[i] > arr[i+1]){
          int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
     counter++;
  }
 for(int i =0; i < n; i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
}
