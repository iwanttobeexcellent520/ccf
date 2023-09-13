#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0),cout.tie(0);
	int n;cin>>n;
	int Sum=0;
	while(n--){
		int w,s;cin>>w>>s;
		Sum+=w*s;
	}
	cout<<max(Sum,0);
	
	return 0;	
}
