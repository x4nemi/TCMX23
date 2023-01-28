/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: L. All Distinct
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
 
    set<int> num;
    int a, tam = 0, f = 0;
    fore(i,0,n){
        cin >> a;
        if(num.count(a) == 0){
            num.insert(a);
            tam++;
        } else {
            f++;
        }
    }
 
    if(f%2 == 1) tam--;
 
    cout << tam << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
