#include <stdio.h>
 
int main() {
    double res;
    int cod, qtd;
    
    scanf("%d %d", &cod, &qtd);
    
    switch(cod){
        case 1:res=qtd * 4.00; break;
        case 2:res=qtd * 4.50; break;
        case 3:res=qtd * 5.00; break;
        case 4:res=qtd * 2.00; break;
        case 5:res=qtd * 1.50; break;
    }
    
    printf("Total: R$ %.2lf\n", res);
    
    return 0;
}