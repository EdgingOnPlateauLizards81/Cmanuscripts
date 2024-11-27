#include <stdio.h>
#define MAX 45

int main() {
    int i;
    int j;
    int n;
    char name[45];

    start :
    printf("Enter the size of the heart : ");
    scanf("%d", &n);
    // don't know why scanf has to take in 'enter' as a newline in it's buffer, i hate C
    getchar();

    printf("Enter the name : ");
    fgets(name, MAX, stdin);
    
    
    // printf("%s\n", name);

    // Another method to find length of an array
    // haha shows exact length when you add this 'name[z] != '\n' condition in this z loop
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    // Calculate the length of the name
    int namelength = 0;
    while (name[namelength] != '\0') {
        namelength++;
    }
    
    printf("Length of name is : %d\n", namelength);

    // this expression is used to find the number from which the iteration should replace the string with the succeeding zero's
    int startCount = {((2*n)-namelength)/2};


    if(n <= 2) {
        printf("Enter the size greater than 2\n");
        printf("Enter the size again\n");
        // goto to start the program again from the label's place
        goto start;
    }

    // for loop for the heart pattern of "*"
    else {

        // for loop for the upper 2 triangles
        for(i = 1; i <= n; i+=2) {
            for(j = i; j <= n; j+=2) {
                printf(" ");
            }
            for(int k = 1; k <= i; k++) {
                printf("*");
            }
            for(int l = i; l <= n; l++) {
                printf(" ");
            }
            for(int m = 1; m <= i; m++) {
                printf("*");
            }
            printf("\n");
        }

        // for loop for the bottom inverse big triangle
        for(int n1 = 0; n1 <= n; n1++) {
            for(int n2 = 0; n2 <= n1; n2++) {
                printf(" ");
            }
            // for loop to print the input name in the desired position
            for(int n3 = n1; n3 <= (2*n)-n1; n3++) {      
                if(n1 == 1 && n3 == startCount) {
                    printf("%s", name);
                }
                if(n1 == 1 && n3 >= startCount && n3 < startCount + namelength) {
                    continue;
                }
                printf("*");
                }
            printf("\n");
            }
        }


    return 0;
}