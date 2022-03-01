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
const int N = 1e7;

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}

int main(){
    fast();
    int n;
    cin>>n;
    vector<int>v(n);
    cin(v)
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i]==i)
            ans++;
    }
    bool f = false;
    for (int i = 0; i < n; ++i) {
        if (v[v[i]] == i && i != v[i])
            f = true;
    }
    if (f) ans += 2;
    else {
        if (ans < n)
            ans++;
    }
    cout << ans << el;
    return 0;
}
