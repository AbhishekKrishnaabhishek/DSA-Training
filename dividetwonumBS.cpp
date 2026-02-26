#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {

    int start = 0;
    int end = dividend;
    int ans = 0;

    while (start <= end) {

        int mid = (start + end) / 2;

        if (mid * divisor == dividend) {
            return mid;
        }
        else if (mid * divisor < dividend) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {

    int dividend = 10;
    int divisor = 3;

    cout << divide(dividend, divisor);

    return 0;
}