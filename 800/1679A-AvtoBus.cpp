// Problem : https://codeforces.com/problemset/problem/1679/A
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define lli long long int
#define vi vector < int >
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define brain for(int i=0;i<n;i++)
#define pb push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  lli n; cin >> n; 
  
  if( n % 2 != 0 || n < 4){
    cout << -1 << nl;
  }
  else{
    ll minimum = n / 6;
    if(n % 6 != 0) minimum++;

    ll maximum = n / 4;
    cout << minimum << " " << maximum << nl;
  }

}

signed main() {
  ios;
  int t;
  cin >> t;
  
  while (t--) {
    solve();
  }

  return 0;
}