#include <stdio.h>

int main() {


    char letter = 'A'; // 65

    //while(!(letter == 'Z' +1))
    while (letter <= 'Z') // in while condition there must be use the condition
        // which makes false and terminate the loop
    {
        printf(" %c", letter);
        letter = letter + 1;

    }
    printf("\n");

    for (char l = 'A'; l <= 'Z'; l++) {
        printf(" %c", l);
    }

    for (int left = 1; left <= 9; left = left + 1) {
        //A code that prints all valid numbers
        //int the form (left)
        for (int right = left + 1; right <= 9; right = right + 1) {
            printf("%d %d \n", left, right);
        }
    }

    printf("***************\n");

// Print out three digits nuber where
// the left digit is strictly less than
// the middle and the middle is strictly less than the right digit

    for (int left = 1; left <= 9; left++) {
        for (int middle = left + 1; middle <= 9; middle++) {
            for (int right = middle + 1; right <= 9; right++) {
                printf("%d%d%d\n", left, middle, right);
            }
        }

    }

// a =a+1;
//++a;
//a++;
//a+=1;


// a = a+5;
//a += 5 ;
//a=a/2;
//a/=2;

    return 0;
}
//while(<cond>)
//<body>;
//
//<cond>?true
//<body>
// <cond>? true
//<body>
//..
//<cond>? false

//for (<init>;<cond>;<post-operation>)
//<body>
//
//<init>
//<cond>?true
//<body>
//<post-operation>
//<cond>?false
//terminate loop
