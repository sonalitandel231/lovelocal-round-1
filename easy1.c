#include <stdio.h>
#include <string.h>

int LastWord(char *s) {
    int siz = strlen(s);
    int count = 0, flag = 0;
    
    for (int i = siz - 1; i >= 0; i--) {
        if (s[i] == ' ' && flag)
            break;
        if (s[i] != ' ') {
            flag = 1;
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str); 
    
    int result = LastWord(str);
    printf("Length of last word: %d\n", result);
    return 0;
}
