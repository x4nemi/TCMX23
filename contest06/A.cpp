/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Easter Eggs
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

string s;
 
bool repetida (char c, int i) {
    return s[0] == c || s[1] == c || s[2] == c ||
            s[i-1] == c || s[i-2] == c || s[i - 3] == c;
}

void solve(){
	int n; cin >> n;
    string chida = "ROYGBIV";
    s = "";
    
    int i = 0;
    while(i < n){
        for(char c : chida) {
            if(i == n) break;
            if(i < 4) {
                i++;
                s += c;
            }
            else if (!repetida(c, i)){
                s+= c;
                i++;
            } 
 
        }
    }
 
    cout << s << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
