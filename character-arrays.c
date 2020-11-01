#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int getLine(char lne[], int lim){
    int c,i;
    for(i=0; i < lim-1 && ((c = getchar()) != '.') && c!='\n'; ++i){
        lne[i] =c;
        if( c ==  '\n'){
            lne[i] =c;
            ++i;
        }
    }
    lne[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){       //while itsn't the last character...
        ++i;
    }
}

int main(int argc, char const *argv[])
{
    int len, max;
    char line[MAXLINE];     //this has the size of the max possible value
    char longest[MAXLINE];  //the comparison

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0){
        printf("%s", longest);
    }
    return 0;
}
