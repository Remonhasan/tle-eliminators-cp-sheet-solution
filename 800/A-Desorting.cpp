// Problem : https://codeforces.com/problemset/problem/1853/A
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

signed main() {
  ios;
  int t;
  cin >> t;
  
  while (t--) {
	  int n; cin >> n;
	  vi a(n); 

	  bool isSorted = true;
	  int diff = 1e9;
	  brain{
	  	cin >> a[i];
	  	if(i > 0){
	  		diff = min(a[i] - a[i-1], diff);
	  		isSorted &= a[i] >= a[i-1];
	  	}
	  }

	  if(!isSorted){
	  	cout << 0 << nl;
	  	continue;
	  } 

	  cout << diff / 2 + 1 << nl;
	}

  return 0;
}