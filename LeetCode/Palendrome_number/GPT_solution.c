bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (but not 0 itself) cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) 
        return false;

    int reversed = 0, original = x;

    // Reverse the number
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // Check for equality
    return x == reversed || x == reversed / 10; // Handles odd-length numbers
}
