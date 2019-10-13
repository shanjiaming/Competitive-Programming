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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int cnt[26] = {};
        string s1,s2;
        cin >> s1 >> s2;
        for(auto i:s1){
            cnt[i-'a']=1;
        }
        int f = 0;
        for(auto i:s2){
            if(cnt[i-'a']){
                f= 1;
                break;
            }
        }
        if(f){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}