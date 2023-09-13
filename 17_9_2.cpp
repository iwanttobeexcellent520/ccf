#include<bits/stdc++.h>

using namespace std;
struct keys{
	int time;
	bool f;
	int num;
//	keys(int t,bool F,int n){time=t;f=F;num=n;}
};
keys key[2005];
int N,K,w,s,c,j=0,hook[1010];//第二次写的时候j没有初始化错误了
//钥匙盒一共有N个挂钩,有K位老师,接下来K行，每行三个整数w, s, c，
//分别表示一位老师要使用的钥匙编号、开始上课的时间和上课的时长
//。可能有多位老师使用同一把钥匙，但是老师使用钥匙的时间不会重叠
bool cmp(keys a,keys b)
{
	if(a.time!=b.time)return a.time<b.time;
	if(a.f!=b.f)return a.f;
	if(a.num!=b.num)return a.num<b.num;	
//这几个的顺序也是很重要，时间就到归还和借用，之后才是序号，因为同一时刻先归还，决定了同时归还或者同时借用时才考虑序号
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>N>>K;
	for(int i=0;i<=N;i++){
		hook[i]=i;
	}
	for(int i=0;i<K;i++){
		cin>>w>>s>>c;
		key[j].num=w;key[j].f=false;key[j].time=s;
		key[j+1].num=w;key[j+1].f=true;key[j+1].time=s+c;
		j+=2;
	}
	sort(key,key+(2*K),cmp);
//	for(int i=0;i<(2*K);i++)cout<<key[i].f<<' ';
	for(int i=0;i<(2*K);i++){
		if(key[i].f==1){
			for(int j=1;j<=N;j++){if(hook[j]==0){hook[j]=key[i].num;break;}}
		}
		else {for(int j=1;j<=N;j++){if(hook[j]==key[i].num){hook[j]=0;break;}}	}
//		cout<<key[i].num<<' '<<key[i].time<<' '<<key[i].f<<endl;
		

	}

	for(int i=1;i<=N;i++){
		cout<<hook[i]<<' ';
	}
	
	return 0;	
}
