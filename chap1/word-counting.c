#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c,n1,nw,nc,state;
    state = OUT;
    n1 = nw = nc = 0;
    printf("Write whatever you want and then finish with a .\n");
    while ((c = getchar()) != '.')  //this is while the word has something different that '.'
    {
        ++nc;
        if(c == '\n')
            ++n1;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
        printf("%c\n",c);
    }
    printf("jump-line: %d out of word: %d letters: %d \n",n1,nw,nc);
    return 0;
}
