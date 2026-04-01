#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {5, 6, 5, 11, 9};

    vector<int> result = nextGreaterElement(arr);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}