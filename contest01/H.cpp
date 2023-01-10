/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. Young Physicist
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

int a[3] = {0};

void solve(){
    int i[3];
    cin >> i[0] >> i[1] >> i[2];
    a[0] += i[0]; a[1] += i[1]; a[2] += i[2];
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();

    if(a[0] == 0 and a[1] == 0 and a[2] == 0) cout << "YES" << ENDL;
    else cout << "NO" << ENDL;

    return 0;
}