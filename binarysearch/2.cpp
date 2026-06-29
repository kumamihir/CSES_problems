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

#define f first
#define s second

#define fl(v) for(int i = 0; i < (v).size(); i++)

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define sz(x) (int)(x).size()

#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n,m,k;
   cin>>n>>m>>k;
   vector<int>arr(n);
   vector<int>arr2(m);
   fl(arr){
    cin>>arr[i];
   }
   fl(arr2){
    cin>>arr2[i];
   }
   int cnt =0;
   unordered_set<int>st;
   for(auto val : arr2) st.insert(val);
   fl(arr){
    int first = arr[i]-k;

    int second = arr[i]+k;
    for(int i=first;i<second;i++){
        if(st.find(i)!=st.end()){
            st.erase(i);
            cnt++;
            break;
        }
    }
   }
   cout<<cnt;



   

    return 0;
}