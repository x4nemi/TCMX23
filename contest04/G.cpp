/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: G. Frog Jumping
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
    lli a, b, k, sum = 0;
    cin >> a >> b >> k;
    if(k % 2 == 0) sum = a * (k / 2) - b * (k / 2);
    else {
        sum += a;
        k--;
        sum += a * (k / 2) - b * (k / 2); 
    }
    cout << sum << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
