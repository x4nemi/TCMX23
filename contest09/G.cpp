/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: G. Ministry of Truth
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
    bool lados = true;
 
    fore(i, 0, (sz(s) / 2)) {
        if(s[i] != s[(sz(s) -1) - i]) {
            if(lados) {
                s[(sz(s) -1) - i] = s[i]; 
                lados = false;
            }
            else {
                s[i] = s[(sz(s) -1) - i];
                lados = true;
            }
        }
    }
 
    cout << s << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
