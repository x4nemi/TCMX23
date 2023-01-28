/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: D. Marathon
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
	int arr[4], t;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    t = arr[0];
    sort(arr, arr+4);
    fore(i,0,4) if(arr[i] == t) cout << 4 - (i+1) << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
