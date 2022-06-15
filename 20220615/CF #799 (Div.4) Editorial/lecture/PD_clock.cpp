int h, m;
void clock_running(int x) {
	m += x;
	h += m / 60;
	m %= 60;
	h %= 24;
}