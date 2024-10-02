// You are using GCC
//Binary Search Algorithm..
#include <iostream>
using namespace std;
bool isSorted(int arr[], int left, int right) {
    if (left >= right) {
        return true;
    }
    int mid = left + (right - left) / 2;
    
    bool leftSorted = isSorted(arr, left, mid);
    bool rightSorted = isSorted(arr, mid + 1, right);

    bool mergeSorted = arr[mid] <= arr[mid + 1];

    return leftSorted && rightSorted && mergeSorted;
}
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (isSorted(arr, 0, n - 1)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
}
