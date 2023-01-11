/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: K. Mysterious Photos
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
using pii = pair<int, int>;
 
vi distancias(vector<pii> f){
    vi v(3);
 
    v[0] = (f[0].first-f[1].first)*(f[0].first-f[1].first)+(f[0].second-f[1].second)*(f[0].second-f[1].second);
    v[1] = (f[0].first-f[2].first)*(f[0].first-f[2].first)+(f[0].second-f[2].second)*(f[0].second-f[2].second);
    v[2] = (f[1].first-f[2].first)*(f[1].first-f[2].first)+(f[1].second-f[2].second)*(f[1].second-f[2].second);
 
    return v;
}

void solve(){
    vector<pii> f1(3);
    vector<pii> f2(3);
 
    fore(i, 0, 3) cin >> f1[i].first >> f1[i].second;
 
    fore(i, 0, 3) cin >> f2[i].first >> f2[i].second;
 
 
    vi dist1 = distancias(f1);
    vi dist2 = distancias(f2);
 
    // fore(i, 0, 3) cout << dist1[i] << ENDL;
 
    sort(dist1.begin(), dist1.end());
    sort(dist2.begin(), dist2.end());
 
    vector<float> p1(2), p2(2);
 
    // fore(i, 0, 2) p[i] = dist;
 
    p1[0] = (float)dist1[2] / (float)dist1[1];
    p1[1] = (float)dist1[2] / (float)dist1[0];
 
    p2[0] = (float)dist2[2] / (float)dist2[1];
    p2[1] = (float)dist2[2] / (float)dist2[0];
 
    fore(i, 0, 2){
        if(p1[i] != p2[i]){
            cout << "NO" << ENDL;
            return;
        }
    }
 
    cout << "YES" << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}