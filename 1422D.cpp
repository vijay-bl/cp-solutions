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


void solve(){
            ll i,j,n,m,k;
            cin>>n;
            ll a[n+1];
            input(a,1,n+1);
            vi freq[n+1];
            fo(i,1,n+1)
            {
				freq[a[i]].pb(i);
			}
			ll maxx[n+1];
			fo(i,1,n+1)
			 maxx[i] = INT_MIN;
			fo(i,1,n+1)
			{
				if(freq[i].size()==0)
				continue;
				maxx[i] = freq[i][0];
				fo(j,1,freq[i].size())
				{
					ll temp = freq[i][j] - freq[i][j-1];
					
					 maxx[i] = max(temp,maxx[i]);
				 }
				 maxx[i] = max(maxx[i], n - freq[i][freq[i].size()-1]+1);
			 }
			 ll dp[n+1];
			 fo(i,1,n+1)
			 dp[i] = INT_MAX;
			 fo(i,1,n+1)
			 {
				 if(maxx[i]==INT_MIN)
				 continue;
				 dp[maxx[i]] = min(dp[maxx[i]],i);
			 }
			 fo(i,2,n+1)
			  dp[i] = min(dp[i-1],dp[i]);
			  fo(i,1,n+1)
			  {
				  if(dp[i]==INT_MAX)
				  cout<<"-1 ";
				  else
				  cout<<dp[i]<< " ";
			  }
			  cout<<endl;
			 
         
			
            
				    
            
        
    
            
						            









}

int main()
{
    IO;
      ll t=1;
      cin>>t;


      while(t--)
      {

          solve();
      }
    return 0;
}
