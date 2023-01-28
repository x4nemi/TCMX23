/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: K. Odd/Even Increments
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
    int a, t1=-1, t2=-1;
    bool flag = true;
    fore(i,0,n){
        cin >> a;
        if(i%2 == 0){
            if(t1==-1) t1 = a%2;
            else if(t1 != a%2) flag = false;
        } else {
            if(t2==-1) t2 = a%2;
            else if(t2 != a%2) flag = false;
        }
    }
 
    if(flag) cout << "YES" << ENDL;
    else cout << "NO" << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
