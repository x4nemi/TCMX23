/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: F. The Contest
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
	int n; cin >> n;
    int p, tp = 0;
    fore(i,0,n){
        cin >> p;
        tp += p;
    }
 
    int m; cin >> m;
    vector<pair<int, int>> lim(m);
 
    fore(i, 0, m) cin >> lim[i].first >> lim[i].second;
 
 
    fore(i, 0, m){
        if(tp >= lim[i].first && tp <= lim[i].second){
            cout << tp << ENDL;
            return;
        } else if(tp < lim[i].first){
            cout << lim[i].first << ENDL;
            return;
        }
    }
 
    cout << -1 << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
