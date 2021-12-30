#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
		int n;
		cin >> n;
		set<int> a;
		// add the squares and cubes of every number that is within n (inclusive)
		for (int i = 1; i * i <= n; i++) {
			a.insert(i * i);
		}
		for (int i = 1; i * i * i <= n; i++) {
			a.insert(i * i * i);
		}
		cout << (int) a.size() << '\n';
    }
    return 0;
}
