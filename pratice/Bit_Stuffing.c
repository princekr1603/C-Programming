#include <stdio.h>
#include <string.h>

void bitStuffing(const char* input, char* output) {
    int i = 0, j = 0, count = 0;
    int len = strlen(input);

    while (i < len) {
        output[j++] = input[i];
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                output[j++] = '0';
                count = 0;
            }
        } else {
            count = 0;
        }
        i++;
    }
    output[j] = '\0';
}

void bitDestuffing(const char* input, char* output) {
    int i = 0, j = 0, count = 0;
    int len = strlen(input);

    while (i < len) {
        output[j++] = input[i];
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                if (input[i+1] == '0') {
                    i++;
                }
                count = 0;
            }
        } else {
            count = 0;
        }
        i++;
    }
    output[j] = '\0';
}

int main() {
    const char* input = "011111101111110";
    char stuffedOutput[256];
    char destuffedOutput[256];

    printf("Original Input: %s\n", input);

    bitStuffing(input, stuffedOutput);
    printf("Bit Stuffed Output: %s\n", stuffedOutput);

    bitDestuffing(stuffedOutput, destuffedOutput);
    printf("Bit Destuffed Output: %s\n", destuffedOutput);

    return 0;
}
