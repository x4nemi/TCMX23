/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: F. Ghanophobia
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
    freopen("ghanophobia.in", "r", stdin);
 
    int n = 0, eg = 1, ga = 6;
    cin >> n;
    
    int arr[n];
 
    fore(i, 0, n){
        string res;
        cin >> res;
 
        int index = res.find(":");
 
        string err = res.substr(0, index);
        string grr = res.substr(index+1, sz(res) - (index + 1));
 
        int e = stoi(err);
        int g = stoi(grr);
 
        //int e = res[0] - 48;
        //int g = res[2] - 48;
 
        //cout << e << " " << g << endl;
 
        int re = eg + e;
        int rg = ga + g;
 
        if(re > rg) arr[i] = 0;
        else if(re < rg) arr[i] = 1;
        else if(re == rg){
            re++;
            if(g > 0) rg+=g;
            
            if(re > rg) arr[i] = 0;
            else if(re < rg) arr[i] = 1;
            else if(re == rg) arr[i] = 2;
        }
    }
 
    fore(i, 0, n){
        if(arr[i] == 0) cout << "Case " << i+1 << ": YES" << endl;
        else if(arr[i] == 1) cout << "Case " << i+1 << ": NO" << endl;
        else cout << "Case " << i+1 << ": PENALTIES" << endl;
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}