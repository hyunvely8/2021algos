#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,k,l,sum=0;
	scanf("%d",&n);
	int a[50];
	int b[50];
	int c[50];
	for(l=0;l<n;l++){
		scanf("%d",&a[l]);
	}
	for(l=0;l<n;l++){
		scanf("%d",&b[l]);
	}
	sort (a,a+n);
	sort (b,b+n);
	for(k=0;k<n;k++){
		c[k]=a[n-1-k]*b[k];
		sum=sum+c[k];
	}
	printf("%d",sum);
}
