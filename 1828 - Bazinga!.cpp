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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
		str s1, s2;
		cin >> s1 >> s2;

		cout << "Caso #" << i << ": ";

		if (s1 == s2) cout << "De novo!\n";
		else if (s1 == "tesoura" && s2 == "papel") cout << "Bazinga!\n";
		else if (s2 == "tesoura" && s1 == "papel") cout << "Raj trapaceou!\n";
		else if (s1 == "papel" && s2 == "pedra") cout << "Bazinga!\n";
		else if (s2 == "papel" && s1 == "pedra") cout << "Raj trapaceou!\n";
		else if (s1 == "pedra" && s2 == "lagarto") cout << "Bazinga!\n";
		else if (s2 == "pedra" && s1 == "lagarto") cout << "Raj trapaceou!\n";
		else if (s1 == "lagarto" && s2 == "Spock") cout << "Bazinga!\n";
		else if (s2 == "lagarto" && s1 == "Spock") cout << "Raj trapaceou!\n";
		else if (s1 == "Spock" && s2 == "tesoura") cout << "Bazinga!\n";
		else if (s2 == "Spock" && s1 == "tesoura") cout << "Raj trapaceou!\n";
		else if (s1 == "tesoura" && s2 == "lagarto") cout << "Bazinga!\n";
		else if (s2 == "tesoura" && s1 == "lagarto") cout << "Raj trapaceou!\n";
		else if (s1 == "lagarto" && s2 == "papel") cout << "Bazinga!\n";
		else if (s2 == "lagarto" && s1 == "papel") cout << "Raj trapaceou!\n";
		else if (s1 == "papel" && s2 == "Spock") cout << "Bazinga!\n";
		else if (s2 == "papel" && s1 == "Spock") cout << "Raj trapaceou!\n";
		else if (s1 == "Spock" && s2 == "pedra") cout << "Bazinga!\n";
		else if (s2 == "Spock" && s1 == "pedra") cout << "Raj trapaceou!\n";
		else if (s1 == "pedra" && s2 == "tesoura") cout << "Bazinga!\n";
		else if (s2 == "pedra" && s1 == "tesoura") cout << "Raj trapaceou!\n";
	}

    return 0;
}
