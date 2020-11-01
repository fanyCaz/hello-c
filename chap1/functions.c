#include <stdio.h>

//declare the function . Function Prototype
int power(int ,int );
float fahToCelsius(float);

//raise base to n-th power n>=0
//receive argument list
int power(int base, int n){
    //when received the value of an scalar, this receives a copy
    int i,p;
    p=1;
    for(i = 1; i <= n; ++i){
        p*=base;
    }
    return p;
}

//receives fahrenheit
float fahToCelsius(float fahr){
    //the position of the 5 affect, 
    //so when making these operations, always do the numerator first
    return (5*(fahr - 32) )/9;
}

int main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i< 10; ++i){
        //send parameter
        printf("Value :%d, 2 %d, -3 %d\n",i,power(2,i),power(-3,i));
    }
    float temperatureF = 64;
    printf("%.2f° F to Celsius: %.2f\n", temperatureF,fahToCelsius(temperatureF));
    return 0;
}