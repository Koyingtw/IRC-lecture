#define MAXN 200005
#define MAXM 1000005 
int n, m;
 
void sol() {
	cin >> n;
	map<int, int> mp;
	for (int i = 0, a; i < n; i++) {
		cin >> a;
		mp[a % 10]++;
	}
	
	bool yes = 0;
	for (int i = 0; i < 10; i++) {
		if (mp[i] <= 0)
			continue;
		for (int j = 0; j < 10; j++) {
			if (mp[j] - (i == j) <= 0)
				continue;
			int tar = 3 - i - j;
			tar %= 10;
			tar += 10;
			tar %= 10;
			int cnt = mp[tar];
			cnt -= (tar == i);
			cnt -= (tar == j);
			yes |= cnt > 0;
		}
	}
	cout << (yes == 1 ? "YES" : "NO") << endl;
}