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
  uint64_t n;
  uint64_t moves_req = 0;
  std::cin >> n;

  uint64_t curr_num = 0, local_maxima = 0;
  for (uint64_t i = 0; i < n; i++)
  {
    std::cin >> curr_num;

    if (curr_num < local_maxima)
    {
      moves_req += local_maxima - curr_num;
    }
    else
    {
      local_maxima = curr_num;
    }
  }

  std::cout << moves_req;
}