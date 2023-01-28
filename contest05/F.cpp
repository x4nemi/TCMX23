/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: F. Hotel
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
	int n, c, d;
    cin >> n >> c >> d;
 
    int arr[91] = {0};
    int total = 0, sin = 3 * c, dob = 3*d;
 
    fore(i,0,n){
        string s;
        cin >> s;
        arr[s[0]]++;
        arr[s[1]]++;
        arr[s[2]]++;
 
        int div = 1e6;
 
        if(arr[s[0]] >= 2 or arr[s[1]] >= 2 or arr[s[2]] >= 2){
            div = min(d+c, d+d);
        }
 
        total += min(min(sin,dob),div);
 
        arr[s[0]] = 0;
        arr[s[1]] = 0;
        arr[s[2]] = 0;
    }
 
    cout << total << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
