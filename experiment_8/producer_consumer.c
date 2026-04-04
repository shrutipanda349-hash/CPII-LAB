/*4. Define 2 functions producer() and consumer() which will operate on a common 
variable item. Producer () will increment the variable item & consumer () will 
decrement the value of item. Producer cannot increment if item reaches at 10. 
Consumer () cannot decrement when item reaches 0. */
#include <stdio.h>


int item = 0;


void producer() {
    if (item < 10) {
        item++;
        printf("Produced item. Current value: %d\n", item);
    } else {
        printf("Cannot produce. Item reached maximum (10).\n");
    }
}


void consumer() {
    if (item > 0) {
        item--;
        printf("Consumed item. Current value: %d\n", item);
    } else {
        printf("Cannot consume. Item is at minimum (0).\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\n");
        printf("Enter your choice: ");
      
        
        scanf("%d", &choice);
        

        switch (choice) {
            case 1:
                producer();
                break;
            case 2:
                consumer();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}