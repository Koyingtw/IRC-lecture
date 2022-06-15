int n, m;
 
bool ispal(int h, int m) {
	string a = "";
	string b = "";
	a += (h < 10 ? "0": "") + to_string(h) + (m < 10 ? "0": "") + to_string(m);
	b = a;
	reverse(all(b));
	return a == b;
}
 
void sol() {
	string s;
	stringstream ss;
	cin >> s;
	ss << s;
	int h1, h2, m1, m2;
	int h, m, x;
	char foo;
	ss >> h >> foo >> m;
	cin >> x;
	
	int ans = 0;
	for (int j = 0; j % 1440 != 0 || j == 0; j += x) {
		m += x;
		h += m / 60;
		m %= 60;
		h %= 24;
		ans += ispal(h, m);
	}
	cout << ans << endl;
}