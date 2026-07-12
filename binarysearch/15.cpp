#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <array>
#include <cmath>
#include <numeric>

using namespace std;

#define int long long
#define ll long long
#define ld long double

#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front

#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define sz(x) (int)(x).size()

#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,n;
    cin >> x>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    set<int>s;
    multiset<int>len;
    s.insert(0);
s.insert(x);

len.insert(x);

for (int p : arr) {
    auto it = s.insert(p).first;

    int l = *prev(it);
    int r = *next(it);

    len.erase(len.find(r - l));   

    len.insert(p - l);           
    len.insert(r - p);           

    cout << *len.rbegin() << " ";
}

    

    return 0;
}