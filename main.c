#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[2][2], b[2][2], c[2][2], i, j, k;
void matrix_mul();
void matrix_add();
void isPalindrome();
int main() {
    int ch;
    int status = 0;
    printf("1. Matrix Mul\n");
    printf("2. Matrix Sum\n");
    printf("3. Palindrome\n");
    printf("4. Exit.\n");
    printf("Enter Your Choice\n");
    scanf("%d", &ch);
    while (status == 0) {
    switch (ch) {
        case 1:
            matrix_mul();
            break;
        case 2:
            matrix_add();
            break;
        case 3:
            isPalindrome();
            break;
        case 4:
            status = 1;
            break;
        default:
            ch = 9;
            break;
    }
}

    return 0;
}

void matrix_mul()
{
    printf("Enter the elements of 1st 2x2 matrix\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2st 2x2 matrix\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}



void matrix_add() {
    printf("Enter the elements of 1st 2x2 matrix\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2st 2x2 matrix\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void isPalindrome()
{
    // Start from leftmost and rightmost corners of str
    char str[100];
    int l = 0;
    int h = strlen(str) - 1;
    printf("Enter the String to check for palindrome");
    scanf("%s", str);


    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}