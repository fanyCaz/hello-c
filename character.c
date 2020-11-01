#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Write 0 to end the input text\n");
    int c,comparison,counter = 0;
    //c = getchar();
    while(c != EOF){ //EOF end of file
        c = getchar();
        putchar(c);
        comparison = c != EOF;
        printf("  :  comparison %d\n",comparison);
        counter++;
        if(counter > 2){
            break;
        }
    }
    printf("%d",EOF);
    long nc;
    while((c =getchar()) != EOF){
        putchar(c);
        if(c == '\n'){
            ++nc;
            break;
        }
    }
    //Programs should act intelligently when given zero-length input
    printf("%1d\n",nc);
    return 0;
}