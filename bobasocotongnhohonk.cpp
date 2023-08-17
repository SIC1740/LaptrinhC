#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    long long a[5000], ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);// hàm chuẩn tỏng thư viện alogrithm của C++ để sáp xếp các phần tử trong một dãy theo thứ tự tăng dần
    // sắp xếp các phàn tử của mảng a từ phần tử đầu tiên đến phần tử thứ n-1 theo thứ tự tăng dần
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long x = k - a[i] - a[j];
            ans += lower_bound(a + j + 1, a + n, x) - (a + j + 1);
        }
    }
    cout << ans;
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}