#include <stdio.h>

int main() {
    char letter1 = 'A', letter2 = 'A', let = "BAY";
    int number = 1;

    while (number <= 999) {
        printf("%s%03d%c%c\n", let, number, letter1, letter2);

        letter2++;

        if (letter2 > 'Z') {
            letter2 = 'A';
            letter1++;

            if (letter1 > 'Z') {
                letter1 = 'A';
                number++;
            }
        }
    }

    return 0;
}
