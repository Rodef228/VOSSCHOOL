#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    int e, n;
    cin >> e >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(n + 2, -1);
    dp[0] = e;

    deque<int> dq;
    dq.push_back(0);

    for (int i = 1; i <= n + 1; ++i) {
        while (!dq.empty() && i - dq.front() > dp[dq.front()]) {
            dq.pop_front();
        }

        if (!dq.empty()) {
            dp[i] = dp[dq.front()] - (i - dq.front());
            if (i <= n) {
                dp[i] += a[i - 1];
            }

            while (!dq.empty() && dp[dq.back()] <= dp[i]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }
    }

    cout << dp[n + 1] << endl;

    return 0;
}
