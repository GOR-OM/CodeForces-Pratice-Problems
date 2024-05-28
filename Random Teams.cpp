#include <bits/stdc++.h>
using namespace std;


// // Constants
// const long long INF = 1e9;
// const long long MOD = 1e9 + 7;

// Macros for frequently used operations
#define fr(i, a, b) for (int i = a; i < b; i++)
#define FIlong long(arr, val) memset(arr, val, sizeof(arr))
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ha cout<<"YES"<<endl
#define na cout<<"NO"<<endl
const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230;

pair<long long, long long> solve(long long n, long long m) {
    if (n == m) {
        return {0, 0};
    }

    // For minimum
    long long k = n / m;
    long long a = n % m;
    long long b = m - a;
    long long Aans = a * (k + 1) * k / 2;
    long long Bans = b * k * (k - 1) / 2;
    long long mini = Aans + Bans;

    // For maximum
    n = n - (m - 1);
    long long maxi = n * (n - 1) / 2;
    return {mini, maxi};
}

int main() {
    

    
        long long n, m;
        cin >> n >> m;
        pair<long long, long long> ans = solve(n, m);
        cout << ans.first << " " << ans.second << "\n";
    

    return 0;
}
