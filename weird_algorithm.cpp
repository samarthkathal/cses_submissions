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

void solve_even(uint64_t *n);
void solve_odd(uint64_t *n);

void solve()
{
  uint64_t n;
  cin >> n;
  cout << n << endl;
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      solve_even(&n);
    }
    else
    {
      solve_odd(&n);
    }
  }
}

void solve_even(uint64_t *n)
{
  *n = *n / 2;
  cout << *n << endl;
}

void solve_odd(uint64_t *n)
{
  *n = (*n * 3) + 1;
  cout << *n << endl;
}