#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,l; cin >> n >> l;
    double a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    double ans = -1;
    for(int i = 1; i < n; i++){
        double dif = a[i]-a[i-1];
        ans = max(ans,dif/2);
    }
    cout << fixed <<setprecision(10) << (double)max({a[0]-0,ans,l-a[n-1]}) << endl;
}