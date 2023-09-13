#include<iostream>
using namespace std;
//REVERSE AN ARRAY?

void toReverse(int arr[],int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter Array Size :" << endl;
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
   
    cout << "\nReversed Array is :" << endl;
    toReverse(arr,n);
    toPrint(arr,n);
    return 0;
}
