#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, i, nwhite, nother;
    int ndigit[10];                     //By definition, char is 'small integer' whhhaaat
    nwhite = nother = 0;
    //initialize array
    for(i = 0; i < 10; i++){
        ndigit[i] = 0;
    }
    while((c = getchar()) != '.'){      //iterates over the input
        if( c >= '0' && c <= '9')
            ++ndigit[c-'0'];        //sums one to the number of the chracter, for example, 
                                    //if there's a 1, then ndigit[1] is changed
        else if(c== ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits =");
    for(i = 0; i < 10; i++){
        printf("- %d",ndigit[i]);
    }
    printf(", white space : %d, other : %d\n",nwhite,nother);
    //HISTOGRAM
    /*
    iterate over the array, iterate in every number -> add * 
    */
    printf("HISTOGRAMS\nHorizontal\n");
    for(int j = 0; j < 10; j++){
        printf("%d |",j);
        for(int k = 0; k < ndigit[j]; k++){
            printf("*");
        }
        printf("\n");
    }
    printf("Vertical\n");
    /*
    iterate over the array-> number <= ndigit[number]
    */
    for(int j = 10; j > 0; j--){
        printf("%2d|",j);
        for(int k = 0; k < 10; k++){
            if(j <= ndigit[k]){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("   ");
    for(int j=0;j < 10; j++){
        printf("%d",j);
    }
    return 0;
}
