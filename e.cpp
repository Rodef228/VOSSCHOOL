#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int b, n, t;

bool valid(const vector<int>& c, const vector<vector<int>>& masks,
           const vector<int>& sums) {
  for (int i = 0; i < t; ++i) {
    int sum = 0;
    for (int j = 0; j < n; ++j) {
      if (masks[i][j] == 1) {
        sum += c[j];
      }
    }
    if (sum != sums[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  cin >> b >> n >> t;

  vector<vector<int>> masks(t, vector<int>(n));
  vector<int> sums(t);

  for (int i = 0; i < t; ++i) {
    string mask;
    cin >> mask;
    for (int j = 0; j < n; ++j) {
      masks[i][j] = mask[j] - '0';
    }
    cin >> sums[i];
  }

  int count = 0;
  vector<int> c(n);

  for (int i = 0; i < pow(b, n); ++i) {
    int x = i;
    for (int j = 0; j < n; ++j) {
      c[j] = x % b;
      x /= b;
    }

    if (valid(c, masks, sums)) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}