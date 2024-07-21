#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << 1;
    } else if (n >= 3) {
        vector<int> arr(n + 1);
        arr[1] = 1;
        arr[2] = 1;

        for (int i = 3; i <= n; ++i) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        cout << arr[n];
    }

    return 0;
}
