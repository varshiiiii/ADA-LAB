#include <stdio.h>
int gcd(int m,int n){
    if(n==0)
        return m;
    return gcd(n,m%n);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n;
    printf("enter two numbers m and n : ");
    scanf("%d%d",& m,& n);
    printf("GCD : %d\n",gcd(m,n));
    return 0;
}
