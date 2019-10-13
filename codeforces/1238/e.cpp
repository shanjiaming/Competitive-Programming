#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 100005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define ms1(i) memset(i,-1,sizeof(i));
#define F first
#define S second
const ll mod =1e9+7;
int cnt[20][20];
int cost[1<<20][20];
int dp[1<<20];
int k;
int solve(int x){
    if(~dp[x])return dp[x];
    if(__builtin_popcount(x)==0)return dp[x] = 0;
    int mi = 1e9;
    for(int i=0;i<k;i++){
        if(!(x&(1<<i)))continue;
        mi = min(mi,solve(x^(1<<i))+cost[x^(1<<i)][i]);
    }
    return dp[x] = mi;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    while(cin >> n >> k >> s){
        ms(cnt);
        ms(cost);
        ms1(dp);
        f1(n-1){
            int x = s[i] - 'a';
            int y = s[i-1] - 'a';
            cnt[x][y]++;
            cnt[y][x]++;
        }
        f(1<<k){
            fr(j,0,k){
                if(i&(1<<j))continue;
                fr(l,0,k){
                    if(l==j)continue;
                    if(i&(1<<l)){
                        cost[i][j] += cnt[j][l] * __builtin_popcount(i);
                    }
                    else{
                        cost[i][j] -= cnt[j][l] * __builtin_popcount(i);
                    }
                }
                //cout<<cost[i][j]<<' '<<i<<' '<<j<<endl;
            }
        }
        cout<<solve((1<<k)-1)<<endl;
    }
}