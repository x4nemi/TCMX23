/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: F. Where's the Bishop?
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
	vector <string> tabla(8);
    fore(i, 0, 8) cin >> tabla[i];
 
    int x, y;
 
    fore(i, 0, 8){
        if((int)tabla[i].find("#.#") != -1){
            cout << i + 2 << " " << (int)tabla[i].find("#.#") + 2 << ENDL;
            return;
        }
    }
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
