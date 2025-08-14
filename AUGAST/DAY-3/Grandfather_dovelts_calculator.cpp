#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int p[10] = {6,2,5,5,4,5,6,3,7,6};

ll count_digit(int i){
    int result = 0;
    while(i > 0){
        int l = i % 10;
        i /= 10;
        result += p[l];
    }
    return result;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int a, b; 
  cin >> a >> b;
  ll total_seg = 0;
  for(int i = a; i <= b; i++){
     total_seg += count_digit(i);
  }
  cout << total_seg << endl;
  return 0;
}