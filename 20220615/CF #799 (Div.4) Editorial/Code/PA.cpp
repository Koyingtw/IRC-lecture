int n, m;
 
void sol() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans = 0;
	ans += b > a;
	ans += c > a;
	ans += d > a;
	cout << ans << endl;
}