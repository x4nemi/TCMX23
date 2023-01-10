/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: L. Reach Median
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
    int n, m;
    cin >> n >> m;
 
    int arr[n];
    fore(i,0,n) cin >> arr[i];
 
    sort(arr, arr+n);
 
    lli sum = 0, cant;
 
    if(arr[n/2] == m) cant = 0;
    else if(arr[n/2] > m){
        auto k = lower_bound(arr, arr+(n/2), m)-arr;
        int rep = (n/2) - k + 1;
        for(int i = k; i < (n/2) + 1; i++) sum += arr[i];
        cant = abs((lli)sum - (lli)rep * (lli)m);
    } else {
        auto k = upper_bound(arr+(n/2), arr+n, m)-arr;
        int rep = k - (n/2);
        for(int i = (n/2); i < k; i++) sum += arr[i];
        cant = abs((lli)sum - (lli)rep * (lli)m);
    }
 
    cout << cant << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}