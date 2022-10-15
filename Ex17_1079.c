#include <stdio.h>
 
int main() {
    
    float n1,n2,n3;
    float t,m;
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%f%f%f",&n1,&n2,&n3);
        t=n1*2.0+n2*3.0+n3*5.0;
        m=t/10.0;
        printf("%.1f\n",m);
    }
 
    return 0;
}