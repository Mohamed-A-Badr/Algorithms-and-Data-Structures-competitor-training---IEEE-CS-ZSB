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
    int n, a;
    cin >> n >> a;
    int arr[n + 2];
    for(int i = 0; i < n; i++) cin >> arr[i];
    a--;
    int l = a, r = a, ans = 0;
    if(arr[a] == 1) ans++;
    l--;
    r++;
    while(l >= 0 or r < n){
        if(arr[l] == 1 and r > n - 1) ans++;
        else if(l < 0 and arr[r] == 1) ans++;
        else if(arr[l] == 1 and arr[r] == 1) ans += 2;
        l--;
        r++;
    }
    cout << ans << el;
    return 0;
}
