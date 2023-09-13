#include<bits/stdc++.h>

using namespace std;
int n,k;
struct Node{
	bool f;

};
Node node[1010];
bool tail_num(int num){
	string s=to_string(num);
	int n=s[s.length()-1]-'0';
	if(num%k==0||n==k)return true;
	return false;
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	
	int tem=n,i=0,j=0;
	while(tem!=1){
		if(node[j].f){j=(j+1)%n;continue;}
		i++;//cout<<j<<' ';
		if(tail_num(i)){node[j].f=true;tem--;}
		j=(j+1)%n;
	}
	for(int i=0;i<n;i++){
		if(!node[i].f){cout<<i+1;break;}
	}
	return 0;	
}
