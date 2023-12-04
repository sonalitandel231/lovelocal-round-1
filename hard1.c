#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* shortestPalindrome(char* s) {
    int len = strlen(s);
    int i, j;
    
    int start = 0;
    
    
    for (i = len - 1; i >= 0; --i) {
        if (s[i] == s[start]) {
            start++;
        }
    }
    
   
    if (start == len) {
        return s;
    }
    
   
    char* result = (char*)malloc(sizeof(char) * (2 * len - start + 1));
    
    
    for (i = len - 1; i >= start; --i) {
        result[len - 1 - i] = s[i];
    }
   
    for (i = 0; i < len; ++i) {
        result[i + len - start] = s[i];
    }
    
    result[2 * len - start] = '\0'; 
    return result;
}

int main() {
    char s[100]; 
    printf("Enter a string: ");
    scanf("%s", s);

    char* shortest = shortestPalindrome(s);
    printf("Shortest palindrome: %s\n", shortest);
    free(shortest); 
    return 0;
}
