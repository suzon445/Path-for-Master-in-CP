#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int ax,ay,bx,by,cx,cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  
  cout << "3\n";
  cout << ax + bx - cx << " " << ay + by - cy << endl;
  cout << bx + cx - ax << " " << by + cy - ay << endl;
  cout << cx + ax - bx << " " << cy + ay - by << endl;
  return 0;
}