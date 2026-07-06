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

// bool canfind(vector<int>&arr,int mid){
//     sort(all(arr));
//     int sum=0;
//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//         if(sum==mid) return true;
//     }
//     if(sum!=mid) sum =0;
//     return false;
// }

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mc = 0;
    int ts = accumulate(all(arr), 0);
    sort(all(arr));

    bool flag = false;

    
        int expcoin = 1;
        for(int i=0;i<n;i++){
            if(arr[i]>expcoin) break;
            expcoin+=arr[i];
        }

        cout<<expcoin;
      
    

    return 0;
}