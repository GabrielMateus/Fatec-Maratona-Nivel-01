#include <stdio.h>
 
int main() {
    int notas []={10000, 5000, 2000, 1000, 500, 200};
    int moedas []={100, 50, 25, 10,5 ,1};
    int real, cent;
    
    scanf("%d.%d", &real, &cent);
    real = 100 * real + cent;
    
    printf("NOTAS:\n");
        for(int i = 0; i <6; ++i){
            printf("%d nota(s) de R$ %.2lf\n", real/notas[i], notas[i]/100.0);
            real %= notas[i];
            }
        
    printf("MOEDAS:\n");
        for(int k = 0; k<6; ++k){
            printf("%d moeda(s) de R$ %.2lf\n", real/moedas[k], moedas[k]/100.0);
            real %= moedas[k];
        }
        
    return 0;
}