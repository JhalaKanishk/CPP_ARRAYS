#include<iostream>
using namespace std;
//BINARY SEARCH  TIME COMPLEXITY : O[LOG^N2]
//{8,12,20,21,34,56}
//KEY = 34
//1st length - n
//2nd length - n/2
//3rd length -(n/2)/2 = n/2^2

int toFind(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while (s <= e)
    {
        int mid = (s+e)/2;

        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    
    return -1;
}

void toPrint(int arr[],int n){
    for (int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    cout << ": BINARY SEARCH :" << endl;
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

    cout << "\nEnter the Element to Find " << endl;
    int key;
    cin >> key;
    cout << "Element found at Index :"<< toFind(arr,n,key) << endl;

    return 0;
}