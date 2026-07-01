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

    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);

     for(int i = 0; i < n; i++){
            cin >> arr[i].first >> arr[i].second;
    }

  sort(arr.begin(), arr.end(), [](pair<int,int> &a, pair<int,int> &b) {
    return a.second < b.second;
});
    int mxw = 1;
    int st = arr[0].first;
    int end = arr[0].second;
    int i=1;
    while(i<n){
        if(arr[i].first<end){
            i++;
        }else if(arr[i].first>=end){
            mxw++;
            end = arr[i].second;
            i++;
        }
    }
    cout<<mxw;


    

    return 0;
}