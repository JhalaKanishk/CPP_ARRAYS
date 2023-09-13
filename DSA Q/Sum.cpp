using namespace std;
#include<iostream>
//SUM OF ALL ARRAY ELEMENTS?

int toSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum += arr[i];
    }
    return sum;
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    cout << ": Sum Of All The Elements in Array :" << endl;
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

    cout<< "\n Sum of all the elements in Array is : " << toSum(arr,n) << endl;
    return 0;
}
