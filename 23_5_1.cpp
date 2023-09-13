#include<bits/stdc++.h>

using namespace std;

map<string,int>m;
int n=0,num=0;
string str="",temp;

int main(){
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			cin>>temp;
			str+=temp;
		}
//		cout<<str;
		
		
			m[str]++;
			cout<<m[str]<<endl;
//			cout<<str<<endl;
		
		str="";
	}

	return 0;	
}
