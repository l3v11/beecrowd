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
    int a, b;
	cin >> a >> b;
	float ga, gb;
	cin >> ga >> gb;

	int cnt = 0;
	while (a <= b) {
		a += a * (ga / 100);
		b += b * (gb / 100);
		cnt++;

		if (cnt > 100) {
			cout << "Mais de 1 seculo." << '\n';
			break;
		}
	}

	if (cnt <= 100) cout << cnt << " anos." << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--) solve();

    return 0;
}
