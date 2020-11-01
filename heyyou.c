//CHAPTER 1

//Read or write aren't built in functions
//stdio to input/output
#include <stdio.h>

//Constants
#define LOWER 0
#define UPPER 300
#define STEP 20

//main() always exists.
main(){
    //you send an argument, the function receives a parameter
    printf("hello world\n");

    //Fahrenheit-Celsius
    //-- if an int and a float are in an operation, the int is converted to float.
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; //doen't considerate negatives
    upper = 300;
    step = 20;

        /** "Pick a style that suits you, then use it consistently" **/
    fahr = lower;
    printf("Fahren\tCelsius\n");
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%2.0f\t%5.2f\n",fahr,celsius);
        fahr += step;
    }
    printf("Using for\n");
    for(fahr = LOWER; fahr <= UPPER; fahr+=STEP){
        celsius = 5 * (fahr-32)/9;
        printf("%2.0f\t%5.2f\n",fahr,celsius);
    }
    return 0;
}
