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

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}

int main(){
    //ast();
    fast_ios
    int n1, n2 , n3;
    cin >> n1 >> n2 >> n3;
    vector<int> v1, v2, v3;
    int x;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n1; i++){
        cin >> x;
        v1.push_back(x);
        sum1 += x;
    }
    for(int i = 0; i < n2; i++){
        cin >> x;
        v2.push_back(x);
        sum2 += x;
    }
    for(int i = 0; i < n3; i++){
        cin >> x;
        v3.push_back(x);
        sum3 += x;
    }
    int i = 0, j = 0, k = 0, ans = 0;
    while(true){
        if(i == n1 || j == n2 || k == n3){
            ans = 0;
            break;
        }
        if(sum1 == sum2 && sum1 == sum3){
            ans = sum1;
            break;
        }
        if(sum1 >= sum2 && sum1 >= sum3){
            sum1 -= v1[i];
            i++;
        }
        else if(sum2 >= sum1 && sum2 >= sum3){
            sum2 -= v2[j];
            j++;
        }
        else if(sum3 >= sum1 && sum3 >= sum2){
            sum3 -= v3[k];
            k++;
        }
    }
    cout << ans << el;
    return 0;
}
