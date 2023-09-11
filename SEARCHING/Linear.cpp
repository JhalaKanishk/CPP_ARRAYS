#include<iostream>
using namespace std;
//LINEAR SEARCH  TIME COMPLEXITY : O[N]
//{12,18,20,42,8,10}
//KEY = 8

int toFind(int arr[],int n,int key){
    for (int i=0;i<=n-1;i++){
        if (arr[i] == key){
            return i;//return index
        }
    }
    return -1;
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << ": LINEAR SEARCH :" << endl;
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
    cout << ": Resultant Array :" << endl;
    toPrint(arr,n);

    cout << "\n: Enter the Element To Find :" << endl;
    int key;
    cin >> key;
    cout << "Element found at Index : " << toFind(arr,n,key) << endl;
    return 0;
}