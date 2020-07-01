#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e3;
int a[mxN], n;

void decode() {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int n1 = 0, n2 = 0;
	for(int i = n - 1; i > 0; --i) {
		if(a[i] == a[i-1]) {
			if(n1 == 0) n1 = a[i];
			else n2 = a[i];
			i--;
		}
		if(n1 * n2 != 0) break;
	}
	if(n1 * n2 == 0) cout << -1;
	else cout << n1 * n2;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
