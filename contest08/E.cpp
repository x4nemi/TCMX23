#include <bits/stdc++.h>
 
#define ENDL '\n'
#define lli long long
// #define  long double
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
using pii = pair<long double, long double>;

const long double pi = std::acos(-1);

int posMaxY(int n, vector<pii> a) {

    int maximo = -1, indice;

    fore(i, 1, n - 1) {
        if(a[i].second > maximo){
            maximo = a[i].second;
            indice = i;
        }
    }

    return indice;
}

long double gradosARad(int g) {
    return g * pi / 180;
}

long double radAGrados(long double r) {
    return fmod( fabs(r * (long double)180 / (long double)(pi)), 90);
}

void solve(){
    int n; cin >> n;

    vector<pii> a(n);
    int x, y;

    fore(i, 0, n) {
        cin >> x >> y;
        a[i].first = (long double)x;
        a[i].second = (long double)y;
    }

    int yMax = posMaxY(n, a);

    // cout << yMax << END;

    pii mar(a[0].first, a[0].second);
    long double anguloMax = -1;
    // cout << mar.first << " " << mar.second<< ENDL;

    // cout << radAGrados(atan(1));
    fore(i, 1, n - 1) {
        if(i < yMax) {
            mar = {a[0].first, a[0].second};
        } else if(i == yMax) {
            // cout << (a[i].second )<<( mar.second) << "jjdkf" <<ENDL;
            long double iz = radAGrados((long double)(atan((a[i].second - mar.second)/ (long double)(a[i].first - mar.first)) ));
            mar = {a[n-1].first, a[n-1].second};
            long double der = radAGrados((long double)(atan((a[i].second - mar.second)/ (long double)(a[i].first - mar.first)) ));
            anguloMax = max(anguloMax, max(iz, der));
            // cout << "izquierda " << iz << " derecha " << der << ENDL;
            continue;
        } 

        anguloMax = max(anguloMax, radAGrados((long double)(atan((a[i].second - mar.second)/ (long double)(a[i].first - mar.first))) ));

        // cout << anguloMax << " i " << mar.first << " d " << mar.second << ENDL;
    }
    cout << fixed;
    cout << setprecision(25);
    cout << anguloMax << ENDL;

}
 
int main(){
    IO;
    //int t; cin >> t; while(t--)
    solve();
    return 0;
}