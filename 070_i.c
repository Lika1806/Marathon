#include <stdio.h>

int main() {
    char arr[] = "Hello World";
    int len = sizeof(arr) - 1;
    int res = 1;
    int found_at = 0;
    int found_dot = 0;

    for (int i = 0; i < len; ++i) {
        if (arr[i] == '@') {
            if (found_at == 0) 
            {
                found_at = 1;
            } 
            else 
            {
                res = 0; // More than one '@' found
                break;
            }
        } else if (arr[i] == '.') 
        {
            found_dot++;
        }
    }

    if (found_at == 0 || found_dot != 1) {
        res = 0; 
    }

    if (res == 1) {
        printf("Email is valid\n");
    } else {
        printf("Email is invalid\n");
    }

    return 0;
}