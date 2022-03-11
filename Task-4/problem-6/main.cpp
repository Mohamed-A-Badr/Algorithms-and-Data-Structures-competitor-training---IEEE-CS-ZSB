#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_in freopen("input.txt", "r", stdin);
#define file_out freopen("output.txt", "w", stdout);
#define el "\n"
#define cin(v) for(auto &it : (v)) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define MOD 1000000007
#define E 2.718281828459045
#define PI acos(-1)

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}

int main() {
    fast();
    //fast_ios
    int n, k, t;
    cin >> n >> k >> t;
    int sum = (t * n * k) / 100;
    for (int i = 1; i <= n; i++) {
        if (sum > k) {
            cout << k << " ";
            sum = sum - k;
        } else if (sum > 0) {
            cout << sum << " ";
            sum = 0;
        } else {
            cout << "0 ";
        }
    }
    return 0;
}
