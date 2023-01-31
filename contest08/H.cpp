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
    int n, x; cin >> n >> x;

    long double suma = 0;
    vector<long double> v(n);
    fore(i, 0, n) {
        cin >> v[i];
        suma += v[i] * v[i];
    }


    long double f = sqrtl((long double)suma / (long double)((long double)(n) * (long double)(x)));

    cout << fixed << setprecision(25);

    fore(i, 0, n) {
        if(suma == 0) cout << "0 ";
        else  cout << (long double)v[i] / (long double)f << " ";
    }

    
}
 
int main(){
    IO;
    //int t; cin >> t; while(t--)
    solve();
    return 0;
}