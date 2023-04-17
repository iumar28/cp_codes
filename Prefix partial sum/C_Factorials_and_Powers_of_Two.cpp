#include <bits/stdc++.h>
using namespace std;
#define UMAR ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
#define int long long
#define vi vector<int>
#define si set<int>
#define ll long long
#define mp map<int,int>
#define ump unordered_map<int,int>
#define pint pair<int,int>
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline 

#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mpair make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define ncn int n;cin>>n;
#define nstr string s;cin>>s;
#define loop(x) for(int i=0;i<(int)x;i++)
#define dikhao(x) for(auto y:x){cout<<' '<< y;}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = ((int)i * (int)i); j <= n; j += i)arr[j] = 1;} return vect;}
/*-----------------------------------------------SOLVE-----------------------------------------------------------------------------------*/
int Count(vector<int> S, int m, int n)
{
    vector<vector<int> > table(
        m + 1,
        vector<int>(
            n + 1, 0));
 
    // Loop to initialize the array
    // as infinite in the row 0
    for (int i = 1; i <= n; i++) {
        table[0][i] = INT_MAX - 1;
    }
 
    // Loop to find the solution
    // by pre-computation for the
    // sequence
    for (int i = 1; i <= m; i++) {
 
        for (int j = 1; j <= n; j++) {
            if (S[i - 1] > j) {
                table[i][j]
                    = table[i - 1][j];
            }
            else {
 
                // Minimum possible
                // for the previous
                // minimum value
                // of the sequence
                table[i][j]
                    = min(
                        table[i - 1][j],
                        table[i][j - S[i - 1]] + 1);
            }
        }
    }
    return table[m][n];
}
void solve()
{
    int n;cin>>n;
    vector<int> list;
    int no=1;list.emplace_back(1);
    while(no<=n){
        list.emplace_back(2*no);
        no*=2; 
    }
    no=6;int count=4;
    while(no<=n){
        list.emplace_back(no);
        no=no*count;
        count++;
    }
    cout<<Count(list,list.size(),n)<<endl;

    
}
/*-------------------------------------------------THE MAIN FUNCTION-------------------------------------------------------------*/
int32_t main() {
    UMAR
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif


    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
