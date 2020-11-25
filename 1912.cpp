#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <bitset>

#define xx first
#define yy second
#define all(x) (x).begin(), (x).end()

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

int     main()
{
	int n;
	scanf("%d", &n);

	vector<int> v(n + 1);
	vector<int> dp(n + 1);
	for (int i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	int ans = v[1];
	for (int i = 1; i <= n; i++)
	{
		dp[i] = max(dp[i - 1] + v[i], v[i]);
		ans = max(dp[i], ans);
	}

	printf("%d\n", ans);
	return 0;
}