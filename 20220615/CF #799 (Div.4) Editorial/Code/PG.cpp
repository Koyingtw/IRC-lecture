#define MAXN 200005
#define MAXM 1000005 
int n, m;
int x[MAXN];
 
void sol() {
	cin >> n >> m;
	int cnt = 1, ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i < n; i++) {
		if (x[i - 1] >= x[i] * 2) {
			if (cnt > m) 
				ans += cnt - m;
			cnt = 1;
		}
		else
			cnt++;
	}
	if (cnt > m) 
		ans += cnt - m;
	cout << ans << endl;
}