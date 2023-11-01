#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
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
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    float j = 1, s = 0;

    for (float i = 1; i <= 39; i+=2) {
        s += i / j;
        j *= 2;
    }

    cout << fixed << setprecision(2) << s << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}