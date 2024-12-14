char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char *result = malloc(1);
        result[0] = '\0';
        return result;
    }
    if (strsSize == 1) {
        char *result = malloc(strlen(strs[0]) + 1);
        strcpy(result, strs[0]);
        return result;
    }

    char longest[201] = {'\0'};
    int i = 0, n = 0, l;

    bool match = true;
    for (i = 0; match; i++) {
        if (strs[0][i] == strs[1][i] && strs[0][i] != '\0') {
            longest[i] = strs[0][i];
        } else {
            match = false;
        }
    }

    l = strlen(longest);

    for (n = 2; n < strsSize; n++) {
        for (i = 0; i < l; i++) {
            if (longest[i] != strs[n][i]) {
                break;
            }
        }
        l = i;
    }

    char *pre = (char *)malloc(l + 1);
    if (pre == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    strncpy(pre, longest, l);
    pre[l] = '\0';
    return pre;
}
