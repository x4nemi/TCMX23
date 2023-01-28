/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. Queue at the School
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
	int n, t, b=0; cin >> n >> t;
    string s; cin >> s;
    fore(i,0,t){
        fore(j,0,n-1){
            if(s[j] == 'B' and s[j+1] == 'G' and b == 0){
                swap(s[j], s[j+1]);
                b = 1;
            } else {
                b = 0;
            }
        }
        b = 0;
    }
    cout << s << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
