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
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= 100000; i++) {
        a %= b;
        a *= 10;
        if (a / b == c) {
            cout << i << el;
            return 0;
        }
    }
    cout << "-1" << el;
    return 0;
}
