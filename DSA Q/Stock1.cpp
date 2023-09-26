#include<iostream>
using namespace std;

int tofindMax(int arr[],int n){
    int max_profit = 0;
    int min_so_far = arr[0];
    for(int i=0;i<=n-1;i++){
        min_so_far = std::min(arr[i], min_so_far);
        int profit = arr[i] - min_so_far;
        max_profit = std::max(profit, max_profit);
    }
    return max_profit;
}

void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "Stock Buy & Sell 1st" << endl;
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

    cout << "\nHence the Maximum Profit for Selling Stock " << tofindMax(arr,n) << endl;
    return 0;
}
