/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: E. Second Order Statistics
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
    set<int> val;
    int x;
    fore(i,0,n){
        cin >> x; val.insert(x);
    }
    
    int cont = 0, first;
    for(auto i : val){
        if(!cont) first = i;
        else {
            if(i != first){
                cout << i << ENDL;
                return;
            } else {
                cout << "NO" << ENDL;
                return;
            }
        }
        cont++;
    }
 
    cout << "NO" << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}