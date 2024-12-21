#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lengthOfLastWord(const char *s) {
    int length = 0;
    int i = strlen(s) - 1;
    // Skip trailing spaces
    while (i >= 0 && isspace(s[i])) {
        i--;
    }
    // Count the length of the last word
    while (i >= 0 && !isspace(s[i])) {
        length++;
        i--;
    }
    return length;
}
