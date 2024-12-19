int strStr(char* haystack, char* needle) {
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);

    // If needle is empty, return 0 (optional behavior)
    if (needle_len == 0) {
        return 0;
    }

    // Outer loop to iterate through haystack
    for (int i = 0; i <= haystack_len - needle_len; i++) {
        int j = 0;
        // Inner loop to compare substring of haystack with needle
        while (j < needle_len && haystack[i + j] == needle[j]) {
            j++;
        }
        // If the entire needle is found, return the starting index
        if (j == needle_len) {
            return i;
        }
    }

    // If no match is found, return -1
    return -1;
}