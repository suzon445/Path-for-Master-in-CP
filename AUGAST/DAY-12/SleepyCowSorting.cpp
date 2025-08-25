#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("sleepy.in","r",stdin);
  freopen("sleepy.out","w",stdout);

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int i = n - 1;
  while(a[i] >= a[i-1] and i - 1 >= 0) i--;

  cout << i << endl;
  return 0;
}