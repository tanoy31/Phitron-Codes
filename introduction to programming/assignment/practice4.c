#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        if(i%3==0 && i%7==0){
            printf("%lld\n",i);
        }
    }
}