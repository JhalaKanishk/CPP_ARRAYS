#include<iostream>
using namespace std;
//INSERTION SORT
//13 46 24 52 20 9
//Insert an element from unsorted array to its correct position in sorted array.
void Insertion_Sort(int arr[], int n) {
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(arr[j-1] > arr[j] && j>0){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "INSERTION SORTING" << endl;

    int n;
    cout << "Enter Array Size :" << endl;
    cin >> n;
    cout << "Enter Array Elements :" << endl;
    int arr[n];

    //input
    for (int i=0;i<=n-1;i++){
        cin >> arr[i];
    }

    //output
    cout << "Resultant Array :" << endl;
    toPrint(arr,n);

    cout << "\nAfter Applying Insertion Sort :" << endl;
    Insertion_Sort(arr,n);
    toPrint(arr,n);

    return 0;
}