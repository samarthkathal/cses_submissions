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

void generate_output(uint64_t *x, uint64_t *y);

void solve()
{
  uint64_t t;
  cin >> t;
  // solving by symmetry

  uint64_t y, x;

  for (uint64_t i = 0; i < t; i++)
  {
    cin >> y >> x;

    generate_output(&x, &y);
  }
}

void generate_output(uint64_t *col, uint64_t *row)
{
  uint64_t sq;

  if (*row >= *col)
  {
    sq = (*row - 1) * (*row - 1);

    if (*row % 2 == 0)
    {
      cout << sq + (*row - *col) + *row << endl;
    }
    else
    {
      cout << sq + *col << endl;
    }

    return;
  }

  sq = (*col - 1) * (*col - 1);

  if (*col % 2 == 0)
  {
    cout << sq + *row << endl;
    return;
  }

  cout << sq + *col + (*col - *row) << endl;
}
