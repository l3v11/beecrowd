#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
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
    ll n;
    cin >> n;

    vl arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

	ll sum = 0;
	sum = accumulate(all(arr), sum);

    vl attacked(n, 0);
    ll i = 0;

    while (i >= 0 && i < n) {
        ll side = arr[i] % 2;
        if (arr[i] > 0) {
            arr[i]--;
            attacked[i] = 1;
            sum--;
        }

        if (side) i++;
        else i--;
    }

    ll cnt = 0;
    for (int j = 0; j < n; j++) {
        cnt += attacked[j];
    }

    cout << cnt << " " << sum << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--) solve();

    return 0;
}
