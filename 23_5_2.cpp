#include<bits/stdc++.h>

using namespace std;
const int N=10010;
int Q[10000][20],K[10000][20],V[10000][20];long long res[N][N];
int w[10000];
int n,d;
void Input(int arr[10000][20]){
	for(int i=0;i<n;i++){
		for(int j=0;j<d;j++){
			cin>>arr[i][j];
		}
		
	}
}

void transpose(){
	int maxx=max(n,d);
	for(int i=0;i<maxx;i++){
		for(int j=i;j<maxx;j++){
			swap(K[i][j],K[j][i]);
		}
	}
}
void cross_multi1(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<d;k++){
				res[i][j]+=Q[i][k]*K[k][j];
			}
			res[i][j]*=w[i];
		}				
	}	
}

void cross_multi2(){
	long long tem;
	for(int i=0;i<n;i++){
		for(int j=0;j<d;j++){
			tem=0;
			for(int k=0;k<n;k++){
				tem+=res[i][k]*V[k][j];
			}
			cout<<tem<<' ';
		}	
		cout<<endl;
	}
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>d;
	Input(Q);Input(K);Input(V);		
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	transpose();
	cross_multi1();
	//	point_multi();
	cross_multi2();
	
	
	return 0;	
}
