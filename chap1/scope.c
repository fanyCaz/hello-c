#include <stdio.h>

#define MAXLINE 10
//Definitions
int max;
char line[MAXLINE];
char longest[MAXLINE];  //now the values are stored here

//void it is now,
//now that all variables are global
int getLine(void);
void copy(void);

int getLine(void){
    int c, i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 && (c=getchar()) != '.' && c != '\n'; ++i ){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(void){
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
    {
        ++i;
    }
}

int main(int argc, char const *argv[])
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0)
    {
        if(len > max){
            max = len;
            copy();
        }
    }
    if(max > 0){
        printf("%s", longest);
    }
    
    return 0;
}
