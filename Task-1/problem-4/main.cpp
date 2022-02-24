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
const ld MOD = 1000000007, E = 2.718281828459045, PI = acos(-1);

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}


void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << i << " x " <<  n << " = " << i * n << el;
    }
}

int main(){
    fast();
    //fast_ios
    solve();
    return 0;
}
