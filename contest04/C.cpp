/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: C. 3D City Model
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
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    int n, m; cin >> n >> m;
    string aux;
 
    vector<string> v(n + 2);
 
    fore(i, 0, n + 2) {
        if(i == 0 || i == n + 1) fore(j, 0, m + 2) aux += "0";       
        else{
            string meh = "0";
            cin >> aux;
            meh += aux + "0";
            aux = meh;
        }
        v[i] = aux;
        aux = "";
    }
 
    int arr_ab = 0, sum = 0;
    
    fore(i, 1, n + 1) {
        fore(j, 1, m + 1){
            if(v[i][j] != '0'){
                arr_ab++;
                if(int(v[i-1][j]) -48< int(v[i][j])-48)sum += int(v[i][j]) - int(v[i-1][j]);
 
                if(int(v[i+1][j])-48 < int(v[i][j])-48)sum += int(v[i][j]) - int(v[i+1][j]);
 
                if(int(v[i][j-1])-48 < int(v[i][j])-48)sum += int(v[i][j]) - int(v[i][j-1]);
 
                if(int(v[i][j+1])-48 < int(v[i][j])-48)sum += int(v[i][j]) - int(v[i][j+1]);
            }
        }
    }
 
    cout << sum + (arr_ab * 2) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
