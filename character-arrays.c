#include <stdio.h>

#define MAXLINE 10

int getLine(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char line[], int len);

int getLine(char lne[], int lim){
    int c,i;
    for(i=0; i < lim-1 && ((c = getchar()) != '.') && c!='\n' ; ++i){
        lne[i] =c;
        if( c ==  '\n'){
            lne[i] =c;
            ++i;
        }
    }
    
    lne[i] = '\0';
    reverse(lne,i);
    return i;
}

void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){       //while isn't the last character...
        ++i;
    }
}

void reverse(char line[], int len){
    printf("%d",len);
    for(int i = len; i >= 0; i--){
        printf("%c",line[i]);
    }
    printf("\n");
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
        printf("%s\n", longest);
    }
    return 0;
}
