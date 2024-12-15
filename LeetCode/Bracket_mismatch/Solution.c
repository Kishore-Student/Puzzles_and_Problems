
int push(char* stack, int top, char item) {
    if (top == 9999) {
        return top; 
    }
    stack[++top] = item;
    return top;
}


int pop(int top) {
    if (top == -1) { 
        return -1; 
    }
    return --top; 
}
bool isValid(char* s) {
    char stack[10000]; 
    int top = -1;
    if (strlen(s) % 2 != 0) {
        return false;
    }

    for (int c = 0; s[c] != '\0'; c++) {
        if (s[c] == '{' || s[c] == '[' || s[c] == '(') {
            top = push(stack, top, s[c]); 
        } else if (s[c] == '}' || s[c] == ')' || s[c] == ']') {
            if (top == -1) {
                return false; 
            }
            if ((s[c] == '}' && stack[top] != '{') ||
                (s[c] == ')' && stack[top] != '(') ||
                (s[c] == ']' && stack[top] != '[')) {
                return false; 
            }
            top = pop(top); 
        }
    }

    return top == -1; 
}
