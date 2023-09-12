#include<iostream>
using namespace std;
//Find the missing number in an array

int toFind(int arr[],int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<n-1;i++){
        xor2 ^= arr[i]; // xor2 = xor2^arr[j];
        xor1 ^=  i+1;// xor1 = xor1^i;
    }
    xor1 ^= n;
    return (xor1^xor2);
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    cout << "Find the missing number in an array" << endl;
    int n; 
    cout << "Enter Array Size : " << endl;
    cin >> n;
    cout << "Enter Array Elements : " << endl;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }

    //output
    cout << "Resultant Array" << endl;
    toPrint(arr,n);

    cout << "\nHence the Missing Element is Array is : " << toFind(arr,n);
    return 0;
}
