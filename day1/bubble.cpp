// Implement the Bubble Sort algorithm to sort an array of integers.


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
