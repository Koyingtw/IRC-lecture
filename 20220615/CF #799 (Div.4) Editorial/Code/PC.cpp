int n, m;
char x[MAXN][MAXN];
 
void sol() {
	n = 8;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> x[i][j];
		}
	}
	
	for (int i = 2; i < n; i++) {
		for (int j = 2; j < n; j++) {
			if (x[i][j] == '#' && x[i + 1][j + 1] == '#' && x[i - 1][j + 1] == '#' && x[i + 1][j - 1] == '#' && x[i - 1][j - 1] == '#') {
				cout << i << " " << j << endl;
				return;
			}
		}
	}
}