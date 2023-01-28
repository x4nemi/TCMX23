/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Programming a robot
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
	int x1, x2, y1, y2, i = 0, sum, mov[4] = {0};
    char dir;
    cin >> x1 >> y1 >> dir >> x2 >> y2;
 
    switch(dir){
        case 'N':
            i = 0;
            break;
        case 'E':
            i = 1;
            break;
        case 'S':
            i = 2;
            break;
        case 'O':
            i = 3;
    }
 
    if(x1 <= x2) mov[1] = abs(x1 - x2);
    else mov[3] = abs(x1 - x2);
 
    if(y1 <= y2) mov[0] = abs(y1 - y2);
    else mov[2] = abs(y1 - y2);
 
    sum = mov[0] + mov[1] + mov[2] + mov[3];
 
    vi m;
    while(sum != 0){
        if(mov[i] != 0) m.pb(mov[i]);
        sum -= mov[i];
        i++;
        if(i == 4) i = 0;
        if(sum != 0) m.pb(-1);
    }
 
    cout << sz(m) << ENDL;
    for(auto x : m){
        if(x == -1) cout << "D" << ENDL;
        else cout << "A " << x << ENDL;
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
