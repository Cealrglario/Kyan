#include <stdlib.h>
#include <stdio.h>

main() {
    int ansr, i , j;
    char *leak = NULL;

    printf("Do you like Kyan Fornite? Y or N?\n");
    
    scanf(" %c", &ansr);

    if (ansr == 'Y') {
        printf("\nOk\n");
    }

    else {
        printf("Idiot\n");

        for (i = 0; i < 10000000000000000000; i++) {
        for (j = 0; j < (1 << i); j++) { 
            printf("Idiot\n");
            leak = (char *)malloc(100000000);
            }
        }
    }

}