#include <stdio.h>
#include <string.h>

// Define a structure to represent the data
struct Data {
    char input[200];
    int number;
    char letter1;
    char letter2;
};

int main() {
    struct Data data = {"ABIADAAKWANABAUBAYBENBONCRODELEBOEDOEKIENUGOMIMOJIGKANKADKEBKATKOGKWALAGNIGNASONDOGUPLA", 1, 'A', 'A'};
    int length = strlen(data.input);
    int i = 0;

    while (data.number <= 999) {
        for (int i = 0; i < length; i += 3) {
            printf("%c%c%c%03d%c%c\n", data.input[i], data.input[i+1], data.input[i+2], data.number, data.letter1, data.letter2);
            data.letter2++;

            if (data.letter2 > 'Z') {
                data.letter2 = 'A';
                data.letter1++;

                if (data.letter1 > 'Z') {
                    data.letter1 = 'A';
                    data.number++;
                }
            }
        }
    }

    return 0;
}
