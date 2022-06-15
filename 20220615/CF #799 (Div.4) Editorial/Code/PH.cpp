int n, m;
int x[MAXN];
 
vector<int> G[MAXN];
 
void sol() {
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		v.pb(x[i]);
		G[i].clear();
	}
	sort(all(v));
	v.erase(unique(all(v)), v.end());
	for (int i = 0; i < n; i++) {
		x[i] = lower_bound(all(v), x[i]) - v.begin();
		G[x[i]].pb(i);
	}
	
	tuple<int, int, int> ans = {1, G[0][0], G[0][0]};
	int tar = v[0];
	for (int i = 0; i < v.size(); i++) {
		int sum = 1;
		pii mn = {0, G[i][0] - 1};
		for (int j = 1; j < G[i].size(); j++) {
			sum -= G[i][j] - G[i][j - 1] - 1;
			if (mn.F > sum) {
				mn = {sum, G[i][j] - 1};
			}
			sum++;
			if (get<0>(ans) < sum - mn.F) {
				ans = make_tuple(sum - mn.F, mn.S + 1, G[i][j]);
				tar = v[i];
			}
			// cmax(ans, );
			// cout << sum - mn.F << " ";
		}
	}
	cout << tar << " " << get<1>(ans) + 1 << " " << get<2>(ans) + 1 << endl;
}