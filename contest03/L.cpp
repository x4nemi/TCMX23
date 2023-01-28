/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: L. Adding Digits
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
	lli a, b, n;
    cin >> a >> b >> n;
 
    a *= 10;
    bool f = false;
    fore(i,0,10){
        if(a%b == 0){
            f = true;
            break;
        }
        a++;
    }
 
    if(!f){
        cout << -1 << ENDL;
        return;
    }
 
    cout << a;
    fore(i,0,n-1) cout << 0;
    cout << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
