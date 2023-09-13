#include<iostream>
using namespace std;
//FIND MINIMUM & MAXIMUM IN ARRAY?

int toFindMin(int arr[],int n){
    int min = INT32_MAX;
    for(int i=0;i<=n-1;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int toFindMax(int arr[],int n){
    int max = INT32_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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

    cout << "\nThe Maximum Element in Array is :" << toFindMax(arr,n);
    cout << "\nThe Minimum Element in Array is :" << toFindMin(arr,n);
    return 0;
}
