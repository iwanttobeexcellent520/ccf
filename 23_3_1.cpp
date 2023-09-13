#include<bits/stdc++.h>

using namespace std;

long long area;
int main(){
	cin.tie(0),cout.tie(0);
	int x1,y1,x2,y2,a,b,n;
	cin>>n>>a>>b;
	while(n--){
		cin>>x1>>y1>>x2>>y2;
		if(x1>=a||x2<=0||y1>=b||y2<=0)continue;
		x1=x1<0?0:x1;
		y1=y1<0?0:y1;
		x2=x2>a?a:x2;
		y2=y2>b?b:y2;
		area+=(y2-y1)*(x2-x1);
	}
	cout<<area;
	
	
	return 0;	
}
