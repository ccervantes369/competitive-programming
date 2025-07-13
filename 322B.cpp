#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    
    int ans = 0;
    
    for(int x = 0; x <= 2; ++x){
        if(a[0] >= x && a[1] >= x && a[2] >= x){
            int r = a[0] - x;
            int g = a[1] - x;
            int b = a[2] - x;
            ans = max(ans, r/3 + g/3 + b/3 + x);
        }
        //cout << r <<" "<< g <<" "<< b <<" -> "<< ans << endl;
    }

    
    
    cout << ans;
    
    
    
    
    return 0;
}