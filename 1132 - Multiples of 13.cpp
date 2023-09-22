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
    int x, y;
    cin >> x >> y;

    int sum = 0;

    if (x > y) {
        for (int i = y; i <= x; i++) {
            if (i % 13 != 0) {
                sum += i;
            }
        }
    } else if (x < y) {
        for (int i = x; i <= y; i++) {
            if (i % 13 != 0) {
                sum += i;
            }
        }
    }

    cout << sum << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}