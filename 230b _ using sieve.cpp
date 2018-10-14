#include "bits/stdc++.h"
using namespace std;

bool a[1000001];

void sieve(){
	a[0]=true;
	a[1]=true;
	for(int i=2;i<1001;i++){
		if(a[i] == 0){
			for(int j=i*i;j<1000001;j+=i){
				a[j]=1;
			}
		}
	}
}

bool isprime(int x){
	if(x == 1) return 0;
	if(x == 2) return 1;
	if(x == 3) return 1;
	if(x%2 == 0) return 0;
	if(x%3 == 0) return 0;
	int div=5;
	int diff=2;
	while(div*div <= x){
		if(x % div == 0){
			return 0;
		}
		div += diff;
		diff = 6-diff;
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	// cout<<"bef";
	sieve();
	// cout<<"end";
	while(n--){
		double x;
		scanf("%lf",&x);
		if(x == 1 || x == 0){
			printf("NO\n");
			continue;
		}
		double sq = sqrt(x);
		long long index = (long long)sq;
		
		if(index*index == x && a[index] == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
