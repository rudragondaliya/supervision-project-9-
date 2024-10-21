#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;	

    evenFile = fopen("even_numbers.txt", "w");
    oddFile = fopen("odd_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);
        } else {
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers have been written to even.txt and odd.txt\n");
    return 0;
}

