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
    ll d, n, a;
    while(cin >> d){
        cin >> n;
        ll sum = 0;
        for(int i = 1;i <= n; i++){
            cin >> a;
            sum += d - a;
        }
        cout<<sum - (d - a)<<el;
    }
    return 0;
}
