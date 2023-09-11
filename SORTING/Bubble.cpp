#include<iostream>
using namespace std;
//BUBBLE SORT
//13 46 24 52 20 9

void Bubble_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int didSwap = 0;
        for(int j=0;j<=n-2;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;   
        }
    }
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "BUBBLE SORTING" << endl;
    
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

    cout << "\nAfter Applying Bubble Sort :" << endl;
    Bubble_sort(arr,n);
    toPrint(arr,n);
    return 0;
}