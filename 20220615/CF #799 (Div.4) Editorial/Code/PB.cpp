int n, m;
 
void sol() {
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mp[a]++;
	}
	int ans = 0;
	int mn = INF;
	int cnt = 0;
	for (auto [a, b]: mp) { 
		mn = min(mn, b);
		ans += b % 2;
		cnt += b % 2 == 0;
	}
	cout << ans + cnt - cnt % 2 << endl;
}