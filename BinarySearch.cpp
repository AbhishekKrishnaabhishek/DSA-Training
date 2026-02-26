#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}
int main() {
    int n, target;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value to search for:" << endl;
    cin >> target;

    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}