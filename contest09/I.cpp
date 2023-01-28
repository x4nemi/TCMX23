/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: I. K-Periodic Array
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
	int n, k; cin >> n >> k;
 
    vi v(n);
    fore(i, 0, n) cin >> v[i];  
    int sum = 0;
    fore(i, 0, k){
        vi arr(3,0);
        for(int j = i; j < n; j+= k){
            arr[v[j]]++;
        }
        sum+= min(arr[1], arr[2]);
            
    }
     cout << sum << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
