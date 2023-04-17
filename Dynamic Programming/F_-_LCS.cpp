#include<bits/stdc++.h>  
using namespace std;
//  +++++++++++++ #define int long long 
//   #define all(v) (v).begin(), (v).end() 
//   #define ff first
//   #define ss second
//   #define pb push_back
//   #define vi vector<int>
// using pi = pair<int, int>;
//   #define vp vector<pair<int,int>>
//   #define vii vector<vector<int>>
//   #define tp tuple<double,int,int> 
//   #define sd(a) scanf("%I64d",&a)
//   #define pr(a) printf("%d ",a)
//   #define mod 1000000007
//   #define INF 1000000000000000000
//   const double EPS = 1e-9;
//   #define f(o,g,h) for(int o=g;o<h;o++)
  // #define getunique(v) {sort(v.;;;.'...begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;
  
// // #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>  // comment   #define int long long 
// namespace number_theory {
//     int gcd(int x, int y) {
//       if (x == 0) return y;
//       if (y == 0) return x;
//       return gcd(y, x % y);
//     }
//     bool isprime(int n) { 
//       if (n <= 1) return false; 
//       if (n <= 3) return true; 
      
//       if (n % 2 == 0 || n % 3 == 0) return false; 
      
//       for (int i = 5; i * i <= n; i += 6) 
//       if (n % i == 0 || n % (i+2) == 0) 
//         return false; 
      
//       return true; 
//     } 
     
//     bool prime[15000105]; 
//     void sieve(int n) { 
//       for (int i = 0; i <= n; i++) prime[i] = 1;
//       for (int p = 2; p * p <= n; p++) { 
//       if (prime[p] == true) { 
//         for (int i = p * p; i <= n; i += p) 
//         prime[i] = false; 
//       } 
//       } 
//       prime[1] = prime[0] = 0;
//     } 
     
//     vector<int> primelist;
//     bool __primes_generated__ = 0;
     
//     void genprimes(int n) {
//       __primes_generated__ = 1;
//       sieve(n + 1);
//       for (int i = 2; i <= n; i++) if (prime[i]) primelist.push_back(i);
//     }
     
//     vector<int> factors(int n) {
//       if (!__primes_generated__) {
//       cerr << "Call genprimes you dope" << endl;
//       exit(1);
//       }
//       vector<int> facs;
     
//       for (int i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
//       if (n % primelist[i] == 0) {
//         while (n % primelist[i] == 0) {
//         n /= primelist[i];
//         facs.push_back(primelist[i]);
//         }
//       }
//       }
//       if (n > 1) {
//       facs.push_back(n);
//       }
//       sort(facs.begin(), facs.end());
//       return facs;
//     }
    
//     vector<int> getdivs(int n) {
//       vector<int> divs;
//       for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//           divs.push_back(i);
//           divs.push_back(n / i);
//         }
//       }
   
//       getunique(divs);
//       return divs;
//     }
//   }
   
// using namespace number_theory;
 
 
void solve(){
  string s,t; cin>>s>>t;
  int n = s.size(); int m = t.size();
  vector<vector<int>> dp(n+1,vector<int>(m+1));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(s[i-1]==t[j-1]) dp[i][j] = 1+dp[i-1][j-1];
      else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
  }

  // for(int i=0;i<n;i++){
  //     for(int j=0;j<n;j++){
  //         cout<<dp[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
 
  int i=n,j=m; string ans;
  while(i>0 && j>0){
    if(s[i-1] == t[j-1]){
      ans += s[i-1]; i--,j--;
    }else{
      if(dp[i-1][j]>dp[i][j-1]) i--;
      else j--;
    }
  }
  reverse(all(ans));
  cout<<ans;
}
int32_t main(){
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
//   #endif   
  ios_base::sync_with_stdio(0); cin.tie(0);
  //genprimes(1e7);
  //init();
  
  int t; t=1;// cin>>t;
  while(t--){
    solve();  
  }
  return 0;
}