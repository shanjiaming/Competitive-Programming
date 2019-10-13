#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 200005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define ms1(i) memset(i,-1,sizeof(i));
#define F first
#define S second
const ll mod = 1e9+7;
int dp[55][55][55][55];
int prec[55][55];
int prer[55][55];
int cont[55][55];
int solve(int l,int r,int u,int d){
	if(l>r||u>d){
		return dp[l][r][u][d] = 0;
	}
	if(~dp[l][r][u][d]){
		return dp[l][r][u][d];
	}
	dp[l][r][u][d] = max(r-l+1,d-u+1);
	for(int i=l;i<=r;i++){
		if(prec[d][i]==prec[u-1][i]){
			dp[l][r][u][d] = min(dp[l][r][u][d],solve(l,i-1,u,d)+solve(i+1,r,u,d));
			//cout<<l<<' '<<r<<' '<<u<<' '<<d<<' '<<i<<endl;
		}
	}
	for(int i=u;i<=d;i++){
		if(prer[i][r]==prer[i][l-1]){
			//cout<<l<<' '<<r<<' '<<u<<' '<<d<<' '<<i<<endl;
			dp[l][r][u][d] = min(dp[l][r][u][d],solve(l,r,u,i-1)+solve(l,r,i+1,d));
		}
	}
	//cout<<l<<' '<<r<<' '<<u<<' '<<d<<' '<<dp[l][r][u][d]<<endl;
	return dp[l][r][u][d];
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin >> n){
		ms1(dp);
		f1(n){
			string s;
			cin >> s;
			s = " " + s;
			fr(j,1,n+1){
				if(s[j]=='#'){
					prer[i][j] = prer[i][j-1] + 1;
					prec[i][j] = prec[i-1][j] + 1;
					cont[i][j] = 1;
					dp[j][j][i][i] = 1;
				}
				else{
					prer[i][j] = prer[i][j-1];
					prec[i][j] = prec[i-1][j];
					cont[i][j] = 0;
					dp[j][j][i][i] = 0;
				}
			}
		}
		cout<<solve(1,n,1,n)<<endl;
	}
}