#include<iostream>
using namespace std;
//SELECTION SORT
//13 46 24 52 20 9

void Selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min = arr[i];
        for(int j=i+1;j<=n-1;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "SELECTION SORTING" << endl;
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
   
    cout << "\nAfter Applying Selection Sort :"<<endl;
    Selection_sort(arr,n);
    toPrint(arr,n);

    return 0;
}