#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using lli = long long int;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  string s,t,ans; cin >> s >> t;
  int a[30];

  memset(a,0,sizeof(a));
  for(int i=0;i<t.size();i++)
  {
      int x = t[i]-'A';
      a[x]++;
  }
  for(int i=s.size()-1;i>=0;i--)
  {
      int x = s[i]-'A';
      if(a[x])
      {
          ans+= s[i];
          a[x]--;
      }
  }

  reverse(ans.begin(),ans.end());
  cout << (ans == t ? "YES" : "NO") << nl;

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