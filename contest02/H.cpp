/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. Little C Loves 3 I
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
    int a, b, c;
 
    if(int(n/3) % 3 == 0) a = int(n/3) + 1;
    else a = int(n/3);
    b = a;
    c = (n - a) - b;
 
    if(c%3 == 0){
        b++;
        c--;
    }
    
    if(b%3 == 0){
        b++;
        c--;
    }
 
    cout << a << " " << b << " " << c << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}