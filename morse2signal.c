#include <stdio.h>


int main() {
    int ch;

    //switch case to covert morse code to 1 and 0 signal code
    while ( (ch=fgetc(stdin)) != EOF ) {
        switch (ch){
            case '.':
                printf("1");
                break;
            case '-':
                printf("111");
                break;
            case ' ':
                printf("0");
                break;
        }
        printf("0");
    }
    return 0;
}

