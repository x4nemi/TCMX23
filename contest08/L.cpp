#include <bits/stdc++.h>
 
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                              \
    ios_base::sync_with_stdio(false);   \
    cin.tie(0);                         \
    cout.tie(0)
 
using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

vector<pii> factorizacion(int a) {
    int n = a;
	vector<pii> ans;
    int e;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0){
		    e = 0;
			while(n % i == 0) {
				n /= i;
				e++;
			}
            pair<int, int> p(i, e);
            // cout << i << " " << e << ENDL;
			ans.pb(p);
		}
	}


    if(n > 1) {
        pii p(n, 1);
        ans.pb(p);
    }
    return ans;
}
 
void solve(){
    int n; cin >> n;

    int a, b, c, minimo = 10000000;

    fore(i, 1, sqrt(n) + 1) {
        fore(j, 1, sqrt(n) + 1) {
            if(i * j * (n / (j * i)) == n){
                // cout << i << " " << j << " " << (n / (j * i)) << ENDL;
                minimo = min(minimo, (i * j * 2) + ((n / (j * i))*i *2) + (n / (j * i)) * 2 * j);
            }
        }
    }

    cout << minimo << ENDL;
    
}
 
int main(){
    IO;
    //int t; cin >> t; while(t--)
    solve();
    return 0;
}