#include<iostream>
using namespace std;
//GENRATE ALL SUB-ARRAYS?

void toGenrate(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            for(int k=i;k<=j;k++){
                cout << arr[k] << " ";
            }
            cout << " " << endl;  
        }
    }
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

    cout << "\nAll Possible Sub-Arrays are :" << endl;
    toGenrate(arr,n);
    

    return 0;
}
