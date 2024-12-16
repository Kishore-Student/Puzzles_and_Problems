int romanToInt(char* s) {

    int sum = 0;
    char* ptr = s + strlen(s) - 1;

    while (ptr >= s) {
        switch (*ptr) {
            case 'I': 
                sum += 1; 
                break;
            case 'V':
                if (ptr > s && *(ptr - 1) == 'I') {
                    sum += 4;
                    ptr--;  
                } else {
                    sum += 5;
                }
                break;
            case 'X':
                if (ptr > s && *(ptr - 1) == 'I') {
                    sum += 9;
                    ptr--;  
                } else {
                    sum += 10;
                }
                break;
            case 'L':
                if (ptr > s && *(ptr - 1) == 'X') {
                    sum += 40;
                    ptr--;  
                } else {
                    sum += 50;
                }
                break;
            case 'C':
                if (ptr > s && *(ptr - 1) == 'X') {
                    sum += 90;
                    ptr--;  
                } else {
                    sum += 100;
                }
                break;
            case 'D':
                if (ptr > s && *(ptr - 1) == 'C') {
                    sum += 400;
                    ptr--;  
                } else {
                    sum += 500;
                }
                break;
            case 'M':
                if (ptr > s && *(ptr - 1) == 'C') {
                    sum += 900;
                    ptr--;  
                } else {
                    sum += 1000;
                }
                break;
        }
        ptr--;  
    }

    return sum;
}