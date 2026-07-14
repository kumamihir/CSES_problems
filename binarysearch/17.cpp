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

    int t;
    cin >> t;
    int mod = 1e9+7;

    vector<int>arr(t);
    unordered_map<int,int>mp;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    ll ans=1;
    for(auto &p : mp){
        ans*=(p.second+1);
        ans%=mod;
    }
    cout<<ans-1;


    return 0;
}