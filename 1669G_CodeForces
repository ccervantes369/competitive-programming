#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<string> g(n);
        for (int i = 0; i < n; i++)
            cin >> g[i];

        for (int j = 0; j < m; j++) {
            int last = n - 1;
            for (int i = n - 1; i >= 0; i--) {
                if (g[i][j] == 'o') {
                    last = i - 1;
                } else if (g[i][j] == '*') {
                    swap(g[i][j], g[last][j]);
                    last--;
                }
            }
        }

        for (const auto &row : g)
            cout << row << '\n';
        cout << '\n';
    }

    return 0;
}
