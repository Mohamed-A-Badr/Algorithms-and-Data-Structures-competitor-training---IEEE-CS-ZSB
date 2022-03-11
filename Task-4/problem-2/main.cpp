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
    int cnt = 0;
    int nums = count(all(s), '/');
    if(nums == s.size()) cout << "/" << el;
    else {
        string temp;
        for(int i= 0; i < s.size(); i++){
            if(s[i] != '/') temp += s[i];
            else {
                if(s[i + 1] == '/' || i == s.size() - 1) continue;
                else temp += s[i];
            }
        }
        cout << temp << el;
    }
    return 0;
}
