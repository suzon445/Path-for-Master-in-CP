#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

const int MAX_SIZE = 500;



int multiply(int res[],int x,int size){
    int carry = 0;
    for(int i = 0; i < size; i++){
        int product = x * res[i] + carry;
        res[i] = product % 10;
        carry = product / 10;
    }

    while(carry){
        res[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}

void factorial(int n){
    int res[MAX_SIZE];
    res[0] = 1;
    int size = 1;
    for(int x = 2; x <= n; x++){
        size = multiply(res,x,size);
    }

    for(int i = size - 1; i >= 0; i--){
        cout << res[i];
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  factorial(n);
  return 0;
}