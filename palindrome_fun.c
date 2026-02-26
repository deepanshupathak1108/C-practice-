<<<<<<< HEAD
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
=======
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
>>>>>>> a9d5c964e135e9e04b89ec9859559b4faff5e0a3
}