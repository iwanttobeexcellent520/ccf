#include<bits/stdc++.h>

using namespace std;
int n,L,s;

map<pair<int,int>,int>mp; 
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>L>>s;
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		mp[make_pair(x,y)]=1; 
	}	
	int B[s+2][s+2];
	for(int i=0;i<=s;i++)for(int j=0;j<=s;j++){
		cin>>B[s-i][j];
	}
	int ans=0;
	for(map<pair<int,int>,int>::iterator it=mp.begin();it!=mp.end();it++){
 	bool f=true;
 	int x=it->first.first,y=it->first.second;
	 for(int i=0;i<=s;i++)for(int j=0;j<=s;j++){
	 	if(B[i][j]==1&&(!mp.count(make_pair(x+i,y+j))))
	 	{f=false;break;	 }
	 	if(B[i][j]==0&&mp.count(make_pair(x+i,y+j)))
	 	{f=false;break;	 }
	 	if(x+i>L||y+j>L){
	 		f=false;break;}
	 } 
	  if(f){
//	  	cout<<x<<' '<<y<<endl;
	  	ans++;
	  }
 	}
 	cout<<ans;
}
