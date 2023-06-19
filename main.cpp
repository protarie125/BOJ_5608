#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vc = vector<char>;

vc vlist;
int n, m;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	vlist = vc(256);
	for (auto i = 0; i < 256; ++i) {
		vlist[i] = i;
	}

	cin >> n;
	for (auto i = 0; i < n; ++i) {
		char x, y;
		cin >> x >> y;
		vlist[x] = y;
	}

	cin >> m;
	auto ans = ostringstream{};
	for (auto i = 0; i < m; ++i) {
		char x;
		cin >> x;

		ans << vlist[x];
	}

	cout << ans.str() << '\n';

	return 0;
}