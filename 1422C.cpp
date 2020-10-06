#include<bits/stdc++.h>

typedef   long long  int ll;
typedef  long double ld;
typedef std::vector<ll> vi;
typedef std::vector<std::vector<ll> > vv;

#define MOD 1000000007
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(i,a,b) for(i=a;i<b;i++)
#define mp make_pair
#define pb(x) push_back(x)
#define fi first
#define se second
#define print(vec,a,b) for(ll i=a;i<b;i++) cout<<vec[i]<<" ";cout<<endl;
#define all(a) a.begin(),a.end()
#define input(vec,a,b) for(ll i = a;i<b;i++) cin>>vec[i];
#define ms(a,val) memset(a,val,sizeof(a))
using namespace std;

const int N = 1e5 + 5;
ll power(ll x, ll n, ll p){
	ll res = 1;
	if(n == 0) return 1;
	if(n == 1) return x%p;
	if(n%2 == 1) res = x%p;
 
	ll temp = power(x,n/2,p);
	return res*((temp*temp)%p)%p;
}
ll inv(ll a, ll p){
	return power(a,p-2,p);
}

void solve(){
            ll i,j,n,m,k;
            
            ll arr[N] = {0},power[N] = {0};
            ll two[N]={0};
            arr[0] = 1,power[0] = 1,two[0] = 1;
            fo(i,1,N)
            {
				two[i] = (two[i-1]*2)%MOD;
				power[i] = (power[i-1]*10)%MOD;
				arr[i] = (power[i] * (i+1))%MOD;
			}
			ll pre[N];
			pre[0] = 1;
			fo(i,1,N)
			{
				pre[i] = (pre[i-1]+arr[i])%MOD;
			}
			string str;
			cin>>str;
			
			n = str.size();
			ll s[n];
			fo(i,0,n)
			{
				s[i] = str[i]-'0';
				
			} 
			ll ans = 0;
			fo(i,1,n+1)
			{
				ll temp = 0;
				if(i!=n)
				temp = (pre[n - i-1]*s[i-1])%MOD;
				ll x= i - 1;
				ll val = (x*(x+1))%MOD;
				val = (val*inv(2,MOD))%MOD;
				val = (val*power[n-i])%MOD;
				val = (val*s[i-1])%MOD;
				temp = (temp + val)%MOD;
				ans = (ans + temp)%MOD;
				//cout<<ans<<endl;
			}
			cout<<ans<<endl;
         
			
            
				    
            
        
    
            
						            









}

int main()
{
    IO;
      ll t=1;
      //cin>>t;


      while(t--)
      {

          solve();
      }
    return 0;
}
