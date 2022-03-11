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
    fast();
    //fast_ios
    string s;
    cin >> s;
    cout <<  (regex_match(s, regex("[0-9a-zA-Z_]{1,16}@[0-9a-zA-Z_]{1,16}(\\.[0-9a-zA-Z_]{1,16})*(/[0-9a-zA-Z_]{1,16})?"))
              ? "YES" : "NO") << el;
    return 0;
}
