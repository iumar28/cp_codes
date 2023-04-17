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
void solve()
{
    int n,q;cin>>n>>q;
    set<int> s;
    string a,b;cin>>a>>b;
    // cout<<a<<" "<<b<<endl;
    while(q--){
        int left,right;cin>>left>>right;
        left-=1,right-=1;
        for(int i=left;i<=right;i++){
            if(a[i]=='z'){a[i]='a';}
            if(b[i]=='z'){b[i]='a';}
            // b[left]=b[left]%27;
            // cout<<a[i]<<" "<<b[i]<<" ";  
            // cout<<a[left]-b[left]<<" ";
            int difference=a[left]-b[left];
            s.insert(difference);
            cout<<difference<<" ";
        }
        // cout<<endl;
        // cout<<"-------";
        if(s.size()==1){cout<<"Yes\n";}
        else{cout<<"No\n";}
    }
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
