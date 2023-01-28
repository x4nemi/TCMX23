/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. Integer Prefix
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
 
    if(int(s[0]) < 48 or int(s[0]) > 57) {
        cout << "-1" << ENDL;
        return;
    } 
    int indice = -1;
 
    fore(i, 0, sz(s)) {
        if(int(s[i]) < 48 or int(s[i]) > 57) {
            indice = i;
            break;
        }
    } 
    if(indice == -1) indice = sz(s);
 
    cout << s.substr(0, indice) << ENDL; 
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
