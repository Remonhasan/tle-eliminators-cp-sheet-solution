/*
    author: remonhasan
    created: 01-09-2024
    topic: two pointers

*/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = n - 1, ans = n;
    while (s[l] != s[r] && ans > 0) {
        l++;
        r--;
        ans = ans - 2;
    }

    cout << ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++) {
        solve();
    }

    return 0;
}