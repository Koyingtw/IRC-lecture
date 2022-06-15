#define MAXN 200005
#define MAXM 1000005 
int n, m;
int x[MAXN], pre[MAXN];
 
void sol() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
		pre[i] = 0;
	}
	for (int i = 1; i <= n; i++)
		pre[i] = pre[i - 1] + x[i];
		
	int ans = INF;
	for (int i = 1; i <= n; i++) {
		if (pre[i] >= m) {
			cmin(ans, lower_bound(pre, pre + i, pre[i] - m) - pre + n - i);
		}
	}
	if (ans > n)
		cout << -1 << endl;
	else
		cout << ans << endl;
}