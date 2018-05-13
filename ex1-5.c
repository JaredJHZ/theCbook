#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

main(){

float fahr,celsius;
fahr = UPPER;
printf("Fahrenheit to celsius\n");
for(fahr=UPPER;fahr>=LOWER;fahr-=STEP){
    celsius = (5.0/9.0)*(fahr-32);
    printf("%3f\t%6.3f\n",fahr,celsius);
}


}
