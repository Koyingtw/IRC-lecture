#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define Weakoying ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pqueue priority_queue
#define pb push_back
#define F first
#define S second
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define cmax(a, b) a = (a > b ? a : b)
#define cmin(a, b) a = (a < b ? a : b)
#define put(x) cout << x << endl;
#define DB(x) cerr << #x << " " << x << endl
#define all(v) v.begin(), v.end()
#define stop system("pause");
#define MEM(x, n) memset(x, n, sizeof(x));
#define lowbit(x) x &(-x)
#if !LOCAL
#define endl "\n"
#endif
const int INF = 0x3f3f3f3f3f3f3f3f;
const int P = 1e9+7;

using namespace std;
/******************************************************************************/
#define MAXN 1005
#define MAXM 1000005 
int n, m;
int x[MAXN], y[MAXN];

int cal(int i, int j) {
	int sum = 0;
	int ans = -INF;
	int mn = 0;
	for (; i < n && j < m; i++, j++) {
		sum += x[i] * y[j];
		ans = max(ans, sum - mn);
		mn = min(mn, sum);
	}
	return ans;
}

void sol() {
	cin >> n >> m;	
	for (int i = 0; i < n; i++) 
		cin >> x[i];
	for (int j = 0;j < m; j++)
		cin >> y[j];
	
	int ans = -INF;
	for (int i = 0; i < n; i++)
		ans = max(ans, cal(i, 0));
	for (int j = 0; j < m; j++)
		ans = max(ans, cal(0, j));
	reverse(x, x + n);
	for (int i = 0; i < n; i++)
		ans = max(ans, cal(i, 0));
	for (int j = 0; j < m; j++)
		ans = max(ans, cal(0, j));
	cout << ans << endl;
}

signed main() {
    Weakoying;
    int t = 1;
    //while (cin >> t)
	{
    	while (t--) {
            sol();
        }
    }
        
    return 0;
}