#include <stdio.h>
 
int main() {
    float n, soma=0;
    int i, count=0;
    for(i=1; i<=6;i++){
        scanf("%f", &n);
        if(n>0){
            soma = soma+n;
            count++;
        }
    }
    double res = soma/count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", res);
    
    return 0;
}