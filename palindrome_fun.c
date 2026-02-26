bool isPalindrome(int x) {
    if (x < 0) return false; 

    float original = x;
    float reverse = 0;
    
    while (x != 0) {
        int rem = x % 10;
        reverse = reverse * 10 + rem;
        x /= 10;
    }

    return reverse == original;
}