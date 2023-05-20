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

void find_beautiful_num(uint64_t *n);

void solve()
{
  uint64_t n;
  std::cin >> n;

  if (n == 1)
  {
    cout << 1;
  }
  else if (n > 1 && n < 4)
  {
    cout << "NO SOLUTION";
  }
  else if (n == 4)
  {
    cout << "2 4 1 3 ";
  }
  else
  {
    find_beautiful_num(&n);
  }
}

void find_beautiful_num(uint64_t *n)
{

  for (int64_t i = *n; i >= 1; i -= 2)
  {
    cout << i << " ";
  }

  for (int64_t i = *n - 1; i >= 1; i -= 2)
  {
    cout << i << " ";
  }
}