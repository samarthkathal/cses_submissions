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
  string dna;
  getline(cin, dna);

  uint64_t reps = 0;
  uint64_t max_reps = 0;
  uint64_t first_ptr = -1, second_ptr = -1;
  char curr_char = dna[0];

  for (uint64_t i = 0; i < dna.length(); i++)
  {
    if (first_ptr == -1 && second_ptr == -1) // beginning of the loop. set up the vars for counting.
    {
      first_ptr = i;
      second_ptr = i;
      curr_char = dna[i];
    }

    if (curr_char != dna[i]) // reset the counters and continue to next iteration.
    {
      first_ptr = i;
      second_ptr = -1;
      curr_char = dna[i];
      continue;
    }
    else // sequence found, start counting.
    {
      second_ptr = i;
      reps = (second_ptr - first_ptr) + 1;
      if (reps >= max_reps)
      {
        max_reps = reps;
      }
    }
  }

  cout << max_reps;
}