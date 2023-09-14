#include<iostream>
using namespace std;
//FIND SECOND SMALLEST & SECOND LARGEST

int tofindSLargest(int arr[],int n){
    int Fl = INT32_MIN;
    int Sl = INT32_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] > Fl){
            Sl = Fl;
            Fl = arr[i];
        }
        else if(arr[i] != Fl && Sl > arr[i]){
            arr[i] = Sl;
        } 
    }
    return Sl;
}


int tofindSSmallest(int arr[],int n){
    int Fs = INT32_MAX;
    int Ss = INT32_MAX;
    for(int i=0;i<=n-1;i++){
        if(arr[i] < Fs){
            Ss = Fs;
            Fs = arr[i];
        }
        else if(arr[i] != Fs && arr[i] < Ss){
            Ss = arr[i];
        }
    }
    return Ss;
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
    cout << " " << endl;

    cout << "To Find Second Smallest : " << tofindSSmallest(arr,n) << endl;
    cout << "To Find Second Smallest : " << tofindSLargest(arr,n) << endl;
    return 0;
}
