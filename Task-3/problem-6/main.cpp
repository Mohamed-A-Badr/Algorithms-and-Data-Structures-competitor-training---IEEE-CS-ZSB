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
    int n;
    cin >> n;
    vector<int> v(n);
    cin(v)
    stack<int> st;
    int i = 0,  temp = 0, area = 0, mx = 0;
    for(i = 0; i < n; i++){
        if(st.empty() || v[st.top()] <= v[i])
            st.push(i);
        else {
            while(!st.empty() && v[st.top()] > v[i]){
                temp = st.top();
                st.pop();
                if(st.empty()){
                    area = v[temp] * i;
                }else {
                    area = v[temp] * (i - st.top() - 1);
                }
                mx = max(area, mx);
            }
        }
        st.push(i);
    }
    while(!st.empty()){
        temp = st.top();
        st.pop();
        if(st.empty()){
            area = v[temp] * i;
        }else {
            area = v[temp] * (i - st.top() - 1);
        }
        mx = max(mx, area);
    }
    cout << mx << el;
    return 0;
}
