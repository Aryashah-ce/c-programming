#include <stdio.h>

int getLength(char str[100]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void reverseString(char str[]) {
    int len = getLength(str);
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void copyString(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void concatenateStrings(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}

void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void toLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
            i++;
    }
}

void capitalizeWords(char str[]) {
    int i = 0;
    int newWord = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newWord = 1;
        } else if (newWord && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            newWord = 0;
        } else {
            newWord = 0;
        }
        i++;
    }
}

void readLine(char str[], int size) {
    fgets(str, size, stdin);
    int len = getLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char note1[1000], note2[1000], result[1000];
    int choice;

    while (1) {
        printf("\n=== Alex's Note-Taking Tool ===\n");
        printf("1. Calculate Length of Note\n");
        printf("2. Reverse a Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy a Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to Upper Case\n");
        printf("7. Convert to Lower Case\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter the note: ");
                readLine(note1, 1000);
                printf("Length: %d\n", getLength(note1));
                break;

            case 2:
                printf("Enter the note: ");
                readLine(note1, 1000);
                printf("Reversed Note: ");
                reverseString(note1);
                break;

            case 3:
                printf("Enter first note: ");
                readLine(note1, 1000);
                printf("Enter second note: ");
                readLine(note2, 1000);
                if (compareStrings(note1, note2))
                    printf("Notes are the SAME.\n");
                else
                    printf("Notes are DIFFERENT.\n");
                break;

            case 4:
                printf("Enter the note to copy: ");
                readLine(note1, 1000);
                copyString(note1, result);
                printf("Copied Note: %s\n", result);
                break;

            case 5:
                printf("Enter first note: ");
                readLine(note1, 1000);
                printf("Enter second note: ");
                readLine(note2, 1000);
                concatenateStrings(note1, note2);
                printf("Concatenated Note: %s\n", note1);
                break;

            case 6:
                printf("Enter the note: ");
                readLine(note1, 1000);
                toUpperCase(note1);
                printf("Upper Case Note: %s\n", note1);
                break;

            case 7:
                printf("Enter the note: ");
                readLine(note1, 1000);
                toLowerCase(note1);
                printf("Lower Case Note: %s\n", note1);
                break;

            case 8:
                printf("Enter the note: ");
                readLine(note1, 1000);
                toLowerCase(note1);
                capitalizeWords(note1);
                printf("Capitalized Note: %s\n", note1);
                break;

            case 9:
                printf("Goodbye, Alex!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
