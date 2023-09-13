#include<bits/stdc++.h>

using namespace std;
int N,num=0;
int main(){
	cin.tie(0),cout.tie(0);
	cin>>N;
	N/=10;
	int i=N/5;
	int j=(N-i*5)/3;
//	cout<<N;
//	cout<<++
	if(i)num+=(i*5+2*i);
	if(j)num+=(j*3+j);
	num+=(N-i*5-j*3);
	cout<<num;
	
	return 0;	
}
