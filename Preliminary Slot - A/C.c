#include <stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	if(n%3==2) printf("Graph Theory\n");
	else if(n%3==1) printf("Binary Search\n");
	else printf("DP\n");
	return 0;
}
