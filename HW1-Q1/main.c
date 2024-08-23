#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;
    int count = 0;
    printf("Enter txt file name:\n");
    char txtName [30];
    scanf("%s", txtName);
    
    FILE *fptr;
    fptr = fopen(txtName, "r");

    char myString[100];

// ----------------------------------

FILE *fptr2;
    fptr2 = fopen(txtName, "r");

    for (char c = getc(fptr2); c != EOF; c = getc(fptr2)) {
        if (c == '\n') // Increment count if this character is newline
            {count = count + 1;}
    }
    count++;

    fclose(fptr2);

    printf("There are %d teams in total.\n", count);

// ----------------------------------

    char temp[100];
    for (int i = 0; i < count; i++) {
        fgets(myString, 100, fptr);
        int score = 0;
        int k;
        for (k = 0; k < strlen(myString); k++) {
            temp[k] = myString[k];
            if (myString[k+1] == ' ') {
                printf("Team %s: ", temp);
            }

            if (myString[k] == 'W') {
                score = score + 3;
            } else if (myString[k] == 'D') {
                score = score + 1;
            }

        }
            printf("%d\n", score);
            for (int n = strlen(temp); n >= 0; n--) {
                temp[n] = '\0';
            }
    }

    return 0;
}
