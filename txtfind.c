#include <stdio.h>
#include <string.h>
#include "Func.h"
#include "Func.c"

int main(){
    char tmp='a';
    char str[WORD];
    char option;

    while(tmp != ' '){
        scanf("%c", &tmp);
        if(tmp != ' '){
            strncat(str, &tmp, 1);
        }
    }
    
    scanf("%c", &option);

    while(option != 'a' && option != 'b'){
        scanf("%c", &option);
    }

    if(option == 'a'){
        print_lines(str);
    }
    else{
        print_similar_words(str);
    }
}