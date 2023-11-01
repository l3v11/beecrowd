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

	while (cin >> n) {
		vi arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];

		int max_num = *max_element(all(arr));

		if (max_num < 10)
			cout << 1 << '\n';

		if (max_num >= 10 && max_num < 20)
			cout << 2 << '\n';

		if (max_num >= 20)
			cout << 3 << '\n';
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
