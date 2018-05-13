    #include<stdio.h>
    #define LOWER 0
    #define UPPER 100
    #define STEP 20

    main(){

        float cels,fahr;
        printf("This program converts %d to %d of Celsius degrees to Fahrenheit degrees");
        for(cels=LOWER;cels<=UPPER;cels+=STEP){
            fahr = (cels+32.0)/(5.0/9.0);
            printf("%3f \t %6.2f\n",cels,fahr);
        }


    }
