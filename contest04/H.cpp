/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: H. New Bus Route
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
    int arr[n];
 
    fore(i,0,n) cin >> arr[i];
 
    sort(arr, arr+n);
 
    int min = INT_MAX, r = 0;
 
    fore(i,1,n){
        if(abs(arr[i] - arr[i-1]) < min){
            min = abs(arr[i] - arr[i-1]);
            r = 1;
        } else if(abs(arr[i] - arr[i-1]) == min) r++;
    }
 
    cout << min << " " << r << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
