#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define pb push_back
const int maxn=1005;
int failure[500005];

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s1,p;
	//while(cin>>s1>>p){
		while(1){
			string s;;
			cout<<"next"<<' '<<1<<' '<<2<<endl;
			getline(cin,s);
			cout<<"next"<<' '<<1<<endl;
			getline(cin,s);
			stringstream ss(s);
			string num;
			ss>>num;
			if(num=="2")
				break;
		}
		while(1){
			string s;
			cout<<"next"<<" 0 1 2 3 4 5 6 7 8 9"<<endl;
			getline(cin,s);
			stringstream ss(s);
			string num;
			ss>>num;
			if(num=="1")
				break;
		}
		cout<<"done"<<endl;
	//}
}