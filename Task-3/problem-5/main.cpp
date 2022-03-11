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
const int MAX = 1000000;

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}

int main(){
    //fast();
    fast_ios
    vector<int> v(MAX + 1, MAX);
    v[0] = 0;
    for(int i = 0; i < MAX; i++){
        v[i + 1] = min(v[i + 1], v[i] + 1);
        for(int j = 2; j <= i && i * j <= MAX; j++){
            v[j * i] = min(v[j * i], v[i] + 1);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << v[n] << el;
    }
    return 0;
}
