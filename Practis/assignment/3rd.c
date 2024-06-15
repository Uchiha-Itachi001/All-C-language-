#include <stdio.h>

typedef struct {
    int code;
    float cost;
    int items;
} Product;

int main() {
    FILE *file;
    Product products[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter %d product code: ",i+1);
        scanf("%d", &products[i].code);
        printf("Enter product cost: ");
        scanf("%f", &products[i].cost);
        printf("Enter number of items available: ");
        scanf("%d", &products[i].items);
    }

    file = fopen("products.txt", "w");
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        fprintf(file, "Product Code: %d, Cost: %.2f, Items Available: %d\n", products[i].code, products[i].cost, products[i].items);
    }

    fclose(file);

    return 0;
}
