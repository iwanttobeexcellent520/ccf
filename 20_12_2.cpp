#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0),cout.tie(0);
	int m;cin>>m;
	vector<int>f_zero(m+2,0),b_one(m+2,0),y(m+2,0),r(m+2,0);
	pair<int,int>res[m+1];
	res[0].first=0,res[0].second=0;
	for(int i=1;i<=m;i++)
		cin>>res[i].first>>res[i].second;
	sort(res+1,res+m+1);
//	for(auto i:res)cout<<i.first<<' ';
	for(int i=1;i<=m;i++)f_zero[i]+=f_zero[i-1]+(1-res[i].second);
	for(int i=m;i>=1;i--)b_one[i]+=b_one[i+1]+res[i].second;
	int Best=-1,maxx=0;
	for(int i=1;i<=m;i++){
//		cout<<b_one[i]<<' '<<f_zero[i-1]<<endl;
		if(b_one[i]+f_zero[i-1]>=maxx)Best=i,maxx=b_one[i]+f_zero[i-1];
//		cout<<maxx<<' ';
		int n=res[i].first;
		while(res[i+1].first==n){i++;}
	
	}
//	cout<<endl;
	cout<<res[Best].first;
	
	return 0;	
}
