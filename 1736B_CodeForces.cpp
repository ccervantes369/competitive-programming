#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sz;
    cin >> sz;
    vector<int> values(sz);
    for (int i = 0; i < sz; ++i) {
        cin >> values[i];
    }

    int maxValue = *max_element(values.begin(), values.end());
    vector<ll> sumPoints(maxValue + 1, 0);
    for (int x : values) {
        sumPoints[x] += x;
    }

    ll bestWithoutPrev = 0;
    ll bestWithPrev    = sumPoints[0];

    for (int i = 1; i <= maxValue; ++i) {
        ll bestCurrent = max(bestWithPrev, bestWithoutPrev + sumPoints[i]);
        bestWithoutPrev = bestWithPrev;
        bestWithPrev    = bestCurrent;
    }

    cout << bestWithPrev << "\n";
    return 0;
}
