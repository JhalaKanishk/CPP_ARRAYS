#include<iostream>
using namespace std;
//TO REMOVE DUPLICATES FROM THE GIVEN ARRAY

int toRemove(int arr[],int n){
    int j = 0;
    for(int i=1;i<=n-1;i++){
        if(arr[i] != arr[i-1]){
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
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

    int k = toRemove(arr,n);
    cout << "\nArray Size After Removing Duplicates : " << k << endl;
    cout << "And the Elements Are :- " << endl;
    toPrint(arr,k);
    return 0;
}
