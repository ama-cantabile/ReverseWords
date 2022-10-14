#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *reverseString(char *str) {
    char result;
    int index = strlen(str);
    char *ret = malloc(sizeof(char *) * index);
    char *words[200];
    char *allocatingString;
    int numberOfWords = 0;

    allocatingString = (char *) malloc(index * sizeof(char *));

    for (int i = 0; i < index; i++) {
        *(allocatingString + i) = *(str + i);
    }

    *words = strtok(allocatingString, " ");

    while (words[numberOfWords] != NULL) {
        words[++numberOfWords] = strtok(NULL, " ");
    }

    /*printf("%s", str);

    printf("%s\n", words[3]);*/

    for (int i = numberOfWords; i > -1; i--) {
        printf(words[i]);
        printf(" ");
    }


/*

    while (words != NULL) {
        int m = strlen(words);
        for (int i = 0; i < m; i++) {
            ret[index - m + i] = words[i];
            ret[index - (m + 1)] = ' ';
            index -= m + 2;
            ret = strtok(NULL, " ");
        }
    }

    while (ch != NULL) {
        ch = *ret;
        printf("%c", ch);
        ret++;
    }
*/


    return result;
}

int main() {
    char testString[] = "hello how are you doing";
    int index = strlen(testString);
    char *ret = (char *) malloc(sizeof(char) * index);
    char *token = strtok(testString, " ");
    //printf("%s", token);

    while (token != NULL) {
        int m = strlen(token);
        for (int i = 0; i < m; i++) {
            ret[index - m + i] = token[i];
        }
        ret[index - (m + 1)] = ' ';
        index -= m + 1;

        token = strtok(NULL, " ");
    }
    //ret = "hello";
    printf("%s", ret);
    //reverseString("Hello How Are You?");
    return 0;
}
