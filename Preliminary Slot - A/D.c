#include<stdio.h>
int main(){
    int n,a,b,c,d,e,sum=0;
    scanf("%d",&n);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>=1) sum++;
    if(b>=1) sum++;
    if(c>=1) sum++;
    if(d>=1) sum++;
    if(e>=1) sum++;
    if(n==3||(n>1&&sum>2)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
