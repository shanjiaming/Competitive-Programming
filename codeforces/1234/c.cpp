#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define pb push_back
#define F first
#define S second
const int mod = 1e9+7;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1,s2;
        int v[n+5][2];
        cin >> s1 >> s2;
        f(n){
            if(s1[i]<='2'){
                v[i][0] = 1;
            }
            else{
                v[i][0] = 2;
            }
            if(s2[i]<='2'){
                v[i][1] = 1;
            }
            else{
                v[i][1] = 2;
            }
        }
        int x = 0;
        int y = 0;
        int f = 0;
        int lx = -1;
        while(x!=n||y!=1){
            if(x==n){
                f=1;
                break;
            }
            //cout<<x<<' '<<y<<'\n';
            if(v[x][y]==1){
                if(lx==x){
                    f=1;
                    break;
                }
                else{
                    lx = x;
                    x++;
                }
            }
            else{
                if(lx==x){
                    lx = x;
                    x++;
                }
                else{
                    lx = x;
                    y ^= 1;
                }
            }
        }
        if(f){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }
}