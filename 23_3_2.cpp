#include<bits/stdc++.h>

using namespace std;

int n,m,k;
int t[100010],c[100010];
bool min_consume(int w){
	long long Sum=0;
	for(int i=0;i<n;i++){
		if(t[i]>w)
		Sum+=c[i]*(t[i]-w);
		if(Sum>m)return false;
	}
	return true;
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>m>>k;
	int right=0;
	for(int i=0;i<n;i++){
		cin>>t[i]>>c[i];
		right=max(right,t[i]);
	}
	int l=k,r=right,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(min_consume(mid))r=mid-1;
		else l=mid+1;
	}
	cout<<l;
	return 0;	
}
