#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < int(n); i++)
#define fore(i,a,b) for (int i = int(a); i <= int(b); i++)
#define ford(i,a,b) for (int i = int(a); i >= int(b); i--)
#define ll int64_t
#define sz(x) int(x.size())

using namespace std;
template<class t, class u> bool maxi(t &a, u b){ if (a < b){ a = b; return 1;} return 0;}
template<class t, class u> bool mini(t &a, u b){ if (a > b){ a = b; return 1;} return 0;}

int fun(int x, int y, int z) {
    int k = 2 * x + 3 * y + 5 * z;
    return k % 13;
}

void foo(int *p, int *q) {
    int t = *p;
    *p = *q; 
    *q = t;
}

int fu(int *p, int *q) {
    int t = (*p) + (*q) > 12 ? 5 : 6;
    cout << *p << " ";
    cout << t << '\n';
    return 2 * t % 5;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a = 3, b = 4;
    cout << fu(&a, &b);
    return 0;
}