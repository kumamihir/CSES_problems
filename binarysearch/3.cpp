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
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    sort(all(arr));
    // int sum =accumulate(all(arr),0);
    // cout<<ceil((double)sum/x);
    int cnt=0;
    int i=0,j=n-1;
    while(i<=j){
      if(i==j){
        cnt++;
        break;
      }
      if(arr[i]+arr[j]<=x){
        cnt++;
        i++;
        j--;
      }else{
        cnt++;
        j--;
      }
      
    }
    cout<<cnt;

    return 0;
}