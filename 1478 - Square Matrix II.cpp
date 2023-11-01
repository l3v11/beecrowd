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
	int n;

	while (cin >> n && n) {
		for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0)
					cout << setw(3) << abs(j - i) + 1;
				else
					cout << " " << setw(3) << abs(j - i) + 1;
            }
			cout << '\n';
        }
		cout << '\n';
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
