#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ps(b) cout << ((b) ? "YES\n" : "NO\n")
#define mod 1000000007
#define uint unsigned long long
using namespace std;

template<typename T, typename U> istream &operator>>(istream &in, pair<T, U> &a) { return in >> a.first >> a.second; }
template<typename T> istream &operator>>(istream &in, vector<T> &a) { for (auto &x : a) in >> x; return in; }
template<typename T, typename U> ostream &operator<<(ostream &out, const pair<T, U> &a) { return out << a.first << ' ' << a.second; }
template<typename T, typename U> ostream &operator<<(ostream &out, const vector<pair<T, U>> &a) { for (auto &x : a) out << x << '\n'; return out; }
template<typename T> ostream &operator<<(ostream &out, const vector<T> &a) { int n = a.size(); if (!n) return out; out << a[0]; for (int i = 1; i < n; i++) out << ' ' << a[i]; return out; }

void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

bool isPrime(int n) { return n == 2 || n == 3 ? true : (n <= 1 || n % 2 == 0 || n % 3 == 0 ? false : ([&]() { for (int i = 5; i * i <= n; i += 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; })()); }
int digit(int n) { return n <= 0 ? 0 : 1 + digit(n / 10); }
uint power(int x, int y, int p = mod) { uint res = 1; x %= p; while (y > 0) { if (y & 1) res = (res * x) % p; y >>= 1; x = (x * x) % p; } return res; }
int modadd(int a, int b) { return ((a % mod) + (b % mod)) % mod; }
int modsub(int a, int b) { return ((a % mod) - (b % mod) + mod) % mod; }
int modmul(int a, int b) { return ((1LL * a % mod) * (b % mod)) % mod; }
uint modInverse(int n, int p = mod) { return power(n, p - 2, p); }

void solve(int t) {
    uint n,k,x;cin>>n>>k;
    if(k&1){
        while(n--){
            cin>>x;
            if(x&1) cout<<x+k<<' ';
            else cout<<x<<' ';
        }
        cout<<nl;
        return;
    }

    while(n--){
        cin>>x;
        cout<<x+(x%(k+1))*k<<' ';
    }
    cout<<endl;
}


int32_t main(){
    //init_code();
    fast_io;
    int t = 1, i = 1;
    cin >> t;
    while (i <= t) {
        solve(i++);
    }
    return 0;
}   