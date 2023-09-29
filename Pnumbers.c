#include <stdio.h>
#include <string.h>

int main() {
    char letter1 = 'A', letter2 = 'A';
    int number = 1;
    char input[] = "ABIADAAKWANABAUBAYBENBONCRODELEBOEDOEKIENUGOMIMOJIGKANKADKEBKATKOGKWALAGNIGNASONDOGUPLA";
    int length = strlen(input);
    int i = 0;

    while (number <= 999) {
        for (int i = 0; i < length; i += 3) {
                 printf("%c%c%c%03d%c%c\n", input[i], input[i + 1], input[i + 2], number, letter1, letter2);
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
        printf("%c%c%c%03d%c%c\n", input[i], input[i + 1], input[i + 2], number, letter1, letter2);

    }

    return 0;
}
