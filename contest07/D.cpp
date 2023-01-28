/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: D. Double it
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
    string s = "";
 
    while(n != 0) {
        if(n % 2 == 0){
            n = (n-2) / 2;
            s+= "B";
        } else {
            n = (n-1) / 2;
            s += "A";
        }
    }
 
    for(int i = sz(s) - 1; i >= 0; i--) cout << s[i];
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
