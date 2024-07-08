#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define lli long long int
#define vi vector < int >
#define vl vector < long long >
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define brain for(int i=0;i<n;i++)
#define pb push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(b<=d && c<=a+d-b){
  	cout << (d-b)+(a+d-b-c) << nl;
  }
  else{
  	cout << -1 << nl;
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