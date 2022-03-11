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

vector<vector<char>> arr;
vector<vector<bool>> visited;

int valid(deque<int>& path, int dx, int dy, int golx, int goly){
    int n = arr.size();
    if(dx < 0 || dx >= n || dy < 0 || dy >= n)
        return -1;
    if(arr[dx][dy] == 'X')
        return -1;
    if(visited[dx][dy] == 1)
        return 0;
    visited[dx][dy] = true;
    path.push_back(dx + dy * n);
    if(dx == golx && dy == goly)
        return 1;
    return 0;
}


int main(){
    fast();
    //fast_ios
    int n;
    cin >> n;
    arr.resize(n);
    visited.resize(n);
    for(int i = 0; i < n; i ++){
        for(int j =0; j < n; j ++){
            char c;
            cin >> c;
            arr[i].push_back(c);
            visited[i].push_back(false);
        }
    }
    int stx, sty, golx, goly;
    cin >> stx >> sty >> golx >> goly;
    deque<int> path, tepath;
    path.push_back(stx + n * sty);
    int ans = 0;
    bool f = false;
    while(true){
        if(path.empty()){
            path = tepath;
            tepath.clear();
        }
        if(path.empty() || f)
            break;
        ans++;
        while(!path.empty()){
            if(f) break;
            int x = path.front();
            path.pop_front();
            int dx = x % n;
            int dy = x / n;
            for(int i = dx - 1; i >= 0; i--){
                int isValid = valid(tepath, i, dy, golx, goly);
                if(isValid == -1)
                    break;
                else if(isValid == 1){
                    f = true;
                    break;
                }
            }
            for(int i = dx + 1; i < n; i++){
                int isValid = valid(tepath, i, dy, golx, goly);
                if(isValid == -1)
                    break;
                else if(isValid == 1){
                    f = true;
                    break;
                }
            }

            for(int i = dy - 1; i >= 0; i--){
                int isValid = valid(tepath, dx, i, golx, goly);
                if(isValid == -1)
                    break;
                else if(isValid == 1){
                    f = true;
                    break;
                }
            }
            for(int i = dy + 1; i < n; i++){
                int isValid = valid(tepath, dx, i, golx, goly);
                if(isValid == -1)
                    break;
                else if(isValid == 1){
                    f = true;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
