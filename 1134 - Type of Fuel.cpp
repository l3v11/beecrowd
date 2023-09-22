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
    int alc = 0, gas = 0, dsl = 0;

    while (1) {
        int n;
        cin >> n;

        if (n == 1) alc++;
        if (n == 2) gas++;
        if (n == 3) dsl++;
        if (n == 4) break;
    }

    cout << "MUITO OBRIGADO" << '\n';
    cout << "Alcool: " << alc << '\n';
    cout << "Gasolina: " << gas << '\n';
    cout << "Diesel: " << dsl << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}