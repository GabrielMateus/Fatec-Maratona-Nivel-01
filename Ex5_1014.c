#include <stdio.h>
 
int main() {
 
    double KM;
    double con;
    int litros;
    
    scanf("%d\n%lf", &litros, &KM);
    con = litros/KM;
    printf("%.3lf km/l\n",con);
    
    return 0;
}