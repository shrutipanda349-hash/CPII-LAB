/*2. Define a structure Distance to store distance in kilometer, meter & centimeter. 
Create an array of Distance type to store 5 Distance variables. Find the longest 
distance using pointers. */
#include <stdio.h>


struct Distance {
    int km;
    int m;
    int cm;
};


long int toCentimeter(struct Distance d) {
    return (d.km * 100000) + (d.m * 100) + d.cm;
}

int main() {
    struct Distance d[5];
    struct Distance *ptr = d;
    int i, maxIndex = 0;

    
    printf("Enter 5 distances (km m cm):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d %d %d", &(ptr + i)->km, &(ptr + i)->m, &(ptr + i)->cm);
    }

    
    long int max = toCentimeter(*(ptr + 0));

    
    for (i = 1; i < 5; i++) {
        long int current = toCentimeter(*(ptr + i));
        if (current > max) {
            max = current;
            maxIndex = i;
        }
    }

    
    printf("\nLongest Distance:\n");
    printf("%d km %d m %d cm\n",
           (ptr + maxIndex)->km,
           (ptr + maxIndex)->m,
           (ptr + maxIndex)->cm);

    return 0;
}