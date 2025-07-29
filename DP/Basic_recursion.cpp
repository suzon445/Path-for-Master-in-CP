#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void fun(int n){
    //Base condition
    if(n <= 0) return;
    
    //fun(n) = fun(n-1) then n;
    fun(n-1);
    // 1.......n-1 then n
    cout << n << endl;
}

void fun1(int n){
    if(n == 0) return;
    cout << n << endl;
    fun1(n-1);
    cout << n << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fun(10);
  fun1(4);
  return 0;
}