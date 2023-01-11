/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: I. Equality
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
    // Jeje
    map<char, int> m;
    m['A'] = 0;
    m['B'] = 1;
    m['C'] = 2;
    m['D'] = 3;
    m['E'] = 4;
    m['F'] = 5;
    m['G'] = 6;
    m['H'] = 7;
    m['I'] = 8;
    m['J'] = 9;
    m['K'] = 10;
    m['L'] = 11;
    m['M'] = 12;
    m['N'] = 13;
    m['O'] = 14;
    m['P'] = 15;
    m['Q'] = 16;
    m['R'] = 17;
    m['S'] = 18;
    m['T'] = 19;
    m['U'] = 20;
    m['V'] = 21;
    m['W'] = 22;
    m['X'] = 23;
    m['Y'] = 24;
    m['Z'] = 25;
    
 
    int n, k, min = INT_MAX, arr[26] = {0};
    char c;
    cin >> n >> k;
 
    fore(i,0,n){
        cin >> c;
        arr[m[c]]++;
    }
 
    fore(i,0,k) if(arr[i] < min) min = arr[i];
 
    cout << min * k << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}