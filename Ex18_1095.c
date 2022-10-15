#include <stdio.h>
 
int main() {
 
        int i, j=60;

    for(i=1;i<40;i+=3){
        printf("I=%i J=%i\n",i,j); 
        j-=5;
    }

    return 0;
}