#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<str>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    int i = 0, scr_in = 0, scr_gr = 0, draw = 0;

    while (1) {
        int in, gr;
        cin >> in >> gr;

        if (in > gr) scr_in++;
        else if (in < gr) scr_gr++;
        else draw++;

        i++;

        cout << "Novo grenal (1-sim 2-nao)" << '\n';

        int rep;
        cin >> rep;
        
        if (rep == 2) {
            break;
        }
    }

    cout << i << " grenais" << '\n';
    cout << "Inter:" << scr_in << '\n';
    cout << "Gremio:" << scr_gr << '\n';
    cout << "Empates:" << draw << '\n';

    if (scr_in > scr_gr) cout << "Inter venceu mais" << '\n';
    else if (scr_in < scr_gr) cout << "Gremio venceu mais" << '\n';
    else cout << "Nao houve vencedor" << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}