#include <bits/stdc++.h>

using namespace std;
typedef uint64_t ll;

// #define PB push_back
// #define MP make_pair
#define REP(i, a, b) for (ll i = a; i <= b; i++)

void solve();

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
  }
  // ll test;
  // cin >> test;
  // REP(TEST, 1, test)
  // {
  //   solve();
  //   cout << "\n";
  // }
  solve();
  cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}

void solve()
{

  // will use the concept of sum of n numbers: n(n+1)]/2
  uint64_t n;
  cin >> n;
  uint64_t expected_sum = (n * (n + 1)) / 2;

  uint64_t curr_sum = 0;
  uint64_t tmp;

  for (uint64_t i = 0; i < n - 1; i++)
  {
    cin >> tmp;
    curr_sum += tmp;
  }

  cout << expected_sum - curr_sum;
}
