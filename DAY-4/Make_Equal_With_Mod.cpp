#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    bool zero = binary_search(arr,arr + n,0);
    bool one = binary_search(arr,arr + n,1);

    if(zero and one){
        cout << "NO\n";
        return;
    }
    if(one){
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1] + 1){
                cout << "NO\n";
                return;
            }
        }
        
    }
    cout << "YES\n";
    


}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}