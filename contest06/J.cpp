/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: J. Presents
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
	int res[n+1];
	
	for(int i = 1; i < n+1; i++){
		int a; cin >> a;
		res[a] = i;
	}
	
	for(int i = 1; i < n+1; i++) cout << res[i] << " ";
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
