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

    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    mp.reserve(n);
mp.max_load_factor(0.7);
    int i=0;
    int j=0;
    int len = 0;
    while(j<n){
        mp[arr[j]]++;
        while(mp[arr[j]]>1){
            mp[arr[i]]--;
            if(mp[arr[i]]==0) mp.erase(arr[i]);
            i++;
        }
        len = max(len,j-i+1);
        j++;

    }
    cout<<len;



    return 0;
}