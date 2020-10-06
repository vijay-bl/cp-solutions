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
            cin>>n>>m;
            ll a[n+1][m+1]={0};
            fo(i,1,n+1)
            {
				fo(j,1,m+1)
				{
					cin>>a[i][j];
				}
			}
			ll ans = 0;
			fo(i,1,n+1)
			{
				fo(j,1,m+1)
				{
					//cout<<i<<" " <<j<<" "<<ans<<endl;
	
					
					if(i>n-i+1||j>m-j+1)
					continue;
					 if((i==n-i+1)&&(j==m-j+1))
					  continue;
					  if(i==(n-i+1))
					  {
						  ll val = (a[i][j] + a[i][m-j+1])/2;
						//  ans = ans + abs(val - a[i][j]) + abs(val - a[i][m-j+1]);
						ans = ans + abs(a[i][j] - a[i][m-j+1]);
						
						  continue;
					  }
					   if(j==(m-j+1))
					  {
						  ll val = (a[i][j] + a[n-i+1][j])/2;
						  //ans = ans + abs(val - a[i][j]) + abs(val - a[n-i+1][j]);
						  ans = ans + abs(a[i][j] - a[n-i+1][j]);
						  continue;
					  }
					  
					ll temp1[4] = {a[i][j], a[n-i+1][j],a[n-i+1][m-j+1],a[i][m-j+1]},val = INT_MAX;
					fo(k,0,4)
					{
						ll temp = temp1[k];
						val = min(val,abs(temp - a[i][j]) +  abs(temp - a[n-i+1][j]) +  abs(temp - a[n-i+1][m-j+1]) +  abs(temp - a[i][m-j+1]));
					}//ans = ans + abs(temp - a[i][j]) +  abs(temp - a[n-i+1][j]) +  abs(temp - a[n-i+1][m-j+1]) +  abs(temp - a[i][m-j+1]) ; 
					ans = ans + val;
			//	cout<<ans<<" "<<i<<" "<<j<<" "<<endl;
				}
			}
			
			cout<<ans<<endl;
         
			
            
				    
            
        
    
            
						            









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
