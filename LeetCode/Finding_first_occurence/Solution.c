int strStr(char* haystack, char* needle) {
    int i = 0, j = 0;
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    if (needle_len == 0) {
        return 0;
    }
    while (i + needle_len <= haystack_len) {
        for (j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needle_len) {
            return i;
        }
        i++;
    }
    return -1;
}
