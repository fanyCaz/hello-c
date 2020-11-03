//This is a header
#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char[]);

//Write a function htoi(s), 
//which converts a string of hexadecimal digits 
//(including an optional 0x or 0X) into itsequivalent integer value.
//The allowable digits are 0 through 9, a through f, and A through F


int main(int argc, char const *argv[])
{
    //short names for local variables are recommended,
    //and long names for external (global)
    //Declaration
        int i;
    //Operators -- what is going to be done with the variable
        i+=1;
    //Expressions -- new value
        int x = i + 2;

    printf("oo013  - \vxb\n");

    int lenght = strlen("postcard to henry");
    printf("longitud  : %d\n",lenght);
    //Declaration
    enum GODS {
        ODIN = 1,
        IBRIS = 2,
        THOR = 3,
        ZEUS = 4
    };
    //can be used as a variables
    enum GODS god = ODIN;
    //All constants inside enums must be different from every other constant, 
    //that's why you can use them like this:
    printf("number of thor : %d , number of ODIN %d \n ", THOR,god);
    //conditionals are always checked from left to right
    
    //when making conversions, the number to be converted must not lose information.

    //ASCII, chars are tiny ints
    int c = 'b';
    int lower;
    if(c >= 'A' && c <= 'Z'){
        lower = c + 'a' - 'A';  //search the value in the ASCII table
    }else{
        lower = c;
    }
    printf("%c char lower %c\n",c, lower);

    //Losing information
    int inte; char cha;
    inte = cha;    //little to wider space, no info lost
    cha = inte;    //lost information
    printf("char: %c int: %d \n", cha , inte);

    //Coercing an expression to result in a data type :  'cast'
    float sr = sqrt(125);
    printf("square root %.2f\n", sr);       //be careful when printing values
    return 0;
}