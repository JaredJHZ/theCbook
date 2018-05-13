
#include<stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 20
main(){
    float fahr, celsius;
    printf("This program converts %d to %d fahr to celsius\n",LOWER,UPPER);
    for(fahr=LOWER;fahr<=UPPER;fahr+=STEP){
            printf("%3f\t",fahr);
            celsius = (5.0/9.0) * (fahr-32.0);
            printf("%6.3f\n",celsius);
    }
}
