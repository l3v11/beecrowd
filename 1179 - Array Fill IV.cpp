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
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
	int n;
    vi even(5), odd(5);

	int evencnt = 0, oddcnt = 0;
	for (int i = 1; i <= 15; i++) {
		cin >> n;

		if (n % 2 == 0) even[evencnt++] = n;

		if (n % 2 != 0) odd[oddcnt++] = n;

		if (oddcnt == 5 || i == 15) {
            for (int i = 0; i < oddcnt; i++) {
				cout << "impar[" << i << "] = " << odd[i] << '\n';
            }

            oddcnt = 0;
        }

		if (evencnt == 5 || i == 15) {
			for (int i = 0; i < evencnt; i++) {
				cout << "par[" << i << "] = " << even[i] << '\n';
			}

			evencnt = 0;
		}
	}
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--) solve();

    return 0;
}
