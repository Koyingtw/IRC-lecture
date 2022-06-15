bool ispal(int h, int m) {
	string a = "";
	string b = "";
	a += (h < 10 ? "0": "") + to_string(h) + (m < 10 ? "0": "") + to_string(m);
	b = a;
	reverse(all(b));
	return a == b;
}