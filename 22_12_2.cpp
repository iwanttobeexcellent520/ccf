#include<bits/stdc++.h>

using namespace std;
int n,m,p,t,len=0;
bool f=true;
struct project{
	int p;
	int t;
	int fast_time;
	int slow_time=0x3f3f3f3f;
};

project pro[370];
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	pro[0].fast_time=1;pro[0].t=0;
	bool f[n+10];
	for(int i=1;i<=m;i++){
		f[i]=false;//因为没有初始化，所以一直错
		cin>>pro[i].p;
	}
	for(int i=1;i<=m;i++){
		cin>>pro[i].t;
		pro[i].fast_time=pro[pro[i].p].fast_time+pro[pro[i].p].t;
		cout<<pro[i].fast_time<<' ';
		len=max(len,pro[i].fast_time+pro[i].t-1);
	}

	if(len<=n){
		cout<<endl;
		for(int i=m;i>=1;i--){
			int pre=pro[i].p;
			if(!f[i]){
				pro[i].slow_time=n-pro[i].t+1;
			}
			
			if(pre){
			pro[pre].slow_time=min(pro[pre].slow_time,pro[i].slow_time-pro[pre].t);
			f[pre]=true;
//				cout<<pre<<endl;
			}
			
		}
		for(int i=1;i<=m;i++){
			cout<<pro[i].slow_time<<' ';
		}	
	}

	

	/*
	  
	10 7
	0 1 0 3 2 3 0
	2 1 6 3 5 4 3
	  
	1 3 1 7 4 7 1 
	3 5 1 8 6 7 8
	 */
	
	
	return 0;	
}
