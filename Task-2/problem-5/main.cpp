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
    cin >> n;
    vector<int> v(n), frq(5500);
    deque<int> dq;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        frq[v[i]]++;
    }
    int mx = *max_element(all(v));
    dq.push_back(mx);
    for (int i = 5000; i > 0; i--) {
        if (i != mx and frq[i] == 1 )
            dq.push_back(i);
        else if (i != mx and frq[i] > 1 ){
            dq.push_back(i);
            dq.push_front(i);
        }
    }
    cout << dq.size() << endl;
    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    return 0;
}
