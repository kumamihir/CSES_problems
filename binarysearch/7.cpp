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

    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int>mp;
    int a=-1,y=-1;
    bool flag = false;
    for(int i=0;i<n;i++){
        int bcha = x-arr[i];
        if(mp.find(bcha)!=mp.end()){
         a = mp[bcha]+1;
         y = i+1;
         flag = true;
            break;
        }
        mp[arr[i]]=i;
    }
   if(flag) cout<<a<<" "<<y;
   else cout<<"IMPOSSIBLE"<<endl;    

    return 0;
}