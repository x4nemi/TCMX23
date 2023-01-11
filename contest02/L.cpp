/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: L. Garage
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
    if(n==1) cout << 3 << ENDL;
    else if(n==2) cout << 5 << ENDL;
    else {
        int sum = 6, cont = 0;
        n -= 2;
        while(n--){
            if(cont == 3){
                sum++;
                cont = 0;
            }
            sum++;
            cont++;
        }
        cout << sum << ENDL;
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}