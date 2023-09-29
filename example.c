#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "ABIADAAKWANABAUBAYBENBONCRODELEBOEDOEKIENUGOMIMOJIGKANKADKEBKATKOGKWALAGNIGNASONDOGUPLA";
    int length = strlen(input);
    int i = 0;
    for (int i = 0; i < length; i += 3) {
        printf("%c%c%c\n", input[i], input[i + 1], input[i + 2]);
    }

    return 0;
}
