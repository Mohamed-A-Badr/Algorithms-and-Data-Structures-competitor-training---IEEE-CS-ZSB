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
    int n, p, k;
    cin >> n >> p >> k;
    stack<int> st;
    int cnt = 0;
    for(int i = p - 1; i >= 1; i--){
        if(cnt == k) break;
        st.push(i);
        cnt++;
    }
    if(!st.empty() && st.top() == 1){
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
    }else if(!st.empty() && st.top() > 1){
        cout << "<< ";
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
    }
    cout << "(" << p << ") ";
    if(p == n) return 0;
    else {
        cnt = 0;
        int mx = 0;
        for(int i = p + 1; i <= n; i++, cnt++){
            if(cnt == k) break;
            cout << i << " ";
            mx = max(mx, i);
        }
        if(mx < n) cout << ">>" << el;
    }
    return 0;
}
