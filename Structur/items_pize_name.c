#include <stdio.h>

// Define the structure
typedef struct {
    char name[50];
    float price;
} Item;

int main() {
    // Create an array of structures
    int n;
    printf("enter the number of items :  ");
    scanf("%d",&n);
    Item items[n];

    // Assign values to the structure members
    for(int i = 0; i < n; i++) {
        printf("Enter item %d name: ", i+1);
        scanf("%s",items[i].name);
        printf("Enter item %d price: ", i+1);
        scanf("%f", &items[i].price);
    }
puts(" ");
    // Print the values
    for(int i = 0; i < n; i++) {
        printf("Item %d: %s\n", i+1, items[i].name);
        printf("Price: %.2f\n", items[i].price);
        printf("\n");
    }

    return 0;
}
