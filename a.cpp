#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int summ = a + b + c;

    int maxx = max(a, b, c);

    if (abs((summ - maxx) - maxx) < d) {
        cout << 0 << endl;
    } else {
        if (summ - maxx > maxx) {
            cout << summ - maxx - maxx - d << endl;
        } else {
            cout << maxx - (summ - maxx) - d << endl;
        }
    }
    return 0;
}
