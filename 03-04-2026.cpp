#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// The function to find the Next Smaller Element
vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> nse(n, -1);
    stack<int> st;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Remove elements greater than or equal to current element
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        
        // If stack is not empty, the top element is the NSE
        if (!st.empty()) {
            nse[i] = st.top();
        }
        
        // Push current element into the stack
        st.push(arr[i]);
    }
    
    return nse;
}

// MAIN FUNCTION - Required to compile and run on your computer
int main() {
    // Example 1
    vector<int> arr1 = {4, 8, 5, 2, 25};
    cout << "Input 1: 4 8 5 2 25" << endl;
    
    vector<int> result1 = nextSmallerElement(arr1);
    
    cout << "Output 1: ";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << "\n-----------------------\n";

    // Example 2
    vector<int> arr2 = {13, 7, 6, 12};
    cout << "Input 2: 13 7 6 12" << endl;
    
    vector<int> result2 = nextSmallerElement(arr2);
    
    cout << "Output 2: ";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0; // Tells the OS the program ran successfully
}