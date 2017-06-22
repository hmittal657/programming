#include "bits/stdc++.h"
using namespace std;

bool a[1000001];

void sieve(){
	a[0]=true;
	a[1]=true;
	for(int i=2;i<1001;i++){
		if(a[i] == false){
			for(int j=i*i;j<1000001;j+=i){
				a[j]=true;
			}
		}
	}
}

bool isprime(int x){
	if(x == 1) return false;
	if(x == 2) return true;
	if(x == 3) return true;
	if(x%2 == 0) return false;
	if(x%3 == 0) return false;
	int div=5;
	int diff=2;
	while(div*div <= x){
		if(x % div == 0){
			return false;
		}
		div += diff;
		diff = 6-diff;
	}
	return true;
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
		long long jk = (long long)sq;
		// if(a[jk] == false){
		// 	printf("Prime\n");
		// }
		if(jk*jk == x && a[jk] == false){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
