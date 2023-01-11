/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: E. Hexadecimal's theorem
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
    if(n == 0) cout << "0 0 0" << ENDL;
    else if(n == 1) cout << "1 0 0" << ENDL;
    else if(n == 2) cout << "1 1 0" << ENDL;
    else if(n == 3) cout << "1 1 1" << ENDL;
    else {
        int f[47];
        f[0] = 0;
        f[1] = 1;
        for(int i=2; i < 47; i++) f[i] = f[i-2] + f[i-1];
 
        int p = 0;
        fore(i,0,47) if(f[i] == n) p = i;
 
        cout << f[p-4] << " " << f[p-3] << " " << f[p-1] << ENDL;
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}