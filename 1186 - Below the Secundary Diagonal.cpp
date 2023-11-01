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
	char st;
	cin >> st;

	vector<vector<double>> arr(12, vector<double>(12));
	double sum = 0;
	int cnt = 0;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> arr[i][j];

			if ((11 - i) < j) {
				sum += arr[i][j];
				cnt++;
			}
		}
	}

	if (st == 'S') cout << fixed << setprecision(1) << sum << '\n';
	else cout << fixed << setprecision(1) << sum / cnt << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--) solve();

    return 0;
}
