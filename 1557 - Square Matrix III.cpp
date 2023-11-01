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
    int width, max;

	cout.precision(10);

    while (cin >> n && n) {
        width = 0;
        max = pow(2, n + n - 2);

        while (max > 0) {
            max /= 10;
            width++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i== 0 && j == 0)
                    cout << setw(width) << 1;

                else if (j == 0)
                    cout << setw(width) << pow(2, i);

                else
                    cout << " " << setw(width) << pow(2, i + j);
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
