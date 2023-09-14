#include<iostream>
using namespace std;
//TO CHECK ARRAY IS SORTED OR NOT

bool toCheck(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        if(arr[i] > arr[i-1]){

        }
        else{
            return 0;//false
        }
    }
    return 1;//true
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
    cout << "Enter Array Elements : " << endl; 
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    //output
    cout << "Resultant Array :" << endl;
    toPrint(arr,n);

    cout << "Array is Sorted 0(NO) & 1(YES) :" << toCheck(arr,n);

    return 0;
}
