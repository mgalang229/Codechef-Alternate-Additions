#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	cout << ((b - a) % 3 == 0 || (b - a - 1) % 3 == 0 ? "YES" : "NO") << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
