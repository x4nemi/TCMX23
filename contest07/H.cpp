/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. Logo
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
    bool arr[n][(n*2)+1];
 
    fore(i,0,n) fore(j,0,(n*2)+1) arr[i][j] = true;
 
    for(int i = 0; i < n-1; i++) for(int j = 1; j < n-1; j++) arr[i][j] = false;
 
    fore(i,0,n) arr[i][n] = false;
 
    for(int i = 1; i < n; i++) for(int j = n+2; j < n*2; j++) arr[i][j] = false;
 
    fore(i,0,n){
        fore(j,0,(n*2)+1){
            if(arr[i][j]) cout << "*";
            else cout << " ";
        }
        cout << ENDL;
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
