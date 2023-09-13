#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >A,B;
int n,m,x,y,q,w,e;;char ch;

int cul(pair<int,int> p){
	return q+w*p.first+e*p.second; 
}
int main(){
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x>>y>>ch;
		if(ch=='A')A.push_back(make_pair(x,y));
		else B.push_back(make_pair(x,y));
	}
	for(int i=0;i<m;i++)
	{
		 cin>>q>>w>>e;
		 
		int len1=A.size(),len2=B.size();
		bool f1=cul(A[0])>0,f2=cul(B[0])<0,f=true;
		for(int i=1;i<len1;i++)	
			if(f1^(cul(A[i])>0)){
//				cout<<cul(A[0])<<' '<<cul(A[i])<<endl;
	cout<<"NO"<<endl;
				f=false;
				break;
			}
		if(f) 
		for(int i=1;i<len2;i++)	
			if(f2^(cul(B[i])<0)){
				f=false;
				cout<<"NO"<<endl;
//cout<<cul(B[0])<<' '<<cul(B[i])<<endl;
				break;
			}
		if(f)cout<<"Yes"<<endl;
	}
}
 
