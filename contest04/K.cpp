/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: K. Way Too Long Words
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
	string s; cin >> s;
    if(int(s.size()) > 10) cout << s[0] << int(s.size()) - 2 << s[int(s.size()) - 1] << ENDL;
    else cout << s << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
