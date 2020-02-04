/*
Zweck:
  Es soll die LED des PIs angesteuert werden.
    Zeichen '0' .. LED aus
    Zeichen '1' .. LED ein
    ( Alle anderen Zeichen werden ignoriert )
  Es soll eine Pause von 1 sek. eingehalten werde damit Beobachtung moeglich ist.
*/
#include <stdio.h>
#include <wiringPi.h>


int main() {
    int ch;
    int led = 29;

    while ( (ch=fgetc(stdin)) != EOF ) {
        switch (ch){
            case '0':
                digitalWrite(led, 0);
                break;
            case '1':
                digitalWrite(led, 1);
                break;
            default:
                break;
        }
        delay(1000);
    }
    return 0;
}

