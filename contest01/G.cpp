/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: G. Johnny and Ancient Computer
*/
#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
    lli a, b; cin >> a >> b;

    if(gcd(a, b) == 1 and a != b and min(a, b) != 1) {
        cout << -1 << ENDL;
    } else if(a == b){
        cout << 0 << ENDL;
    } else {
        long long x(max(a, b)), y(min(a,b));
    
        int r = 0;

        long long m, n, o;
        while(x > y) {
            if(y * 2 <= x) m = y * 2;
            else m = -1;
            if(y * 4 <= x) n = y * 4;
            else n = -1;
            if(y * 8 <= x) o = y * 8;
            else o = -1;

            if(m == -1 and n == -1 and o == -1) {
                cout << -1 << ENDL;
                return;
            }
            y = max(m, max(n, o));
            r++;
        }

        if(x == y) cout << r << ENDL;
        else cout << -1 << ENDL;
    }

}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}