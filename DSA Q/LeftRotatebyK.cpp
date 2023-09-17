#include <iostream>
using namespace std;
//ROTATE ARRAY BY K ELEMENTS

// Function to Reverse the array
void Reverse(int arr[], int start, int end){
  while (start <= end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k){
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    cout << "Enter Array Size :" << endl;
    int n;
    cin >> n;
    cout << "Enter Array Elements :" << endl;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    //output
    cout << "Resultant Array :" << endl;
    toPrint(arr,n);

    //Left Rotate
    cout << "\nEnter the value from which you want Left Rotation :" << endl;
    int k;
    cin >> k;
    cout << "After Left Rotation Array as Follow : " << endl;
    Rotateeletoleft(arr,n,k);
    toPrint(arr,n);

    return 0;
}
