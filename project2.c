// ROLL NO. - 280 (TRENDS)
// Online Inventory & E-Invoice System

#include <stdio.h>
int main() {
    int ProductID[10] = {4567, 2345, 8896, 9990, 2314,  7867, 4433, 1232, 8976, 5645};
    int ProductQty[10] = {1, 4, 5, 8, 7,9, 6, 1, 2, 5};
    float MRP[10] = {1200, 1800, 1500, 2500, 2200, 1700, 3000, 1100, 1400, 2000};
    float Discount[10] = {10, 15, 20, 5, 25,  10, 30, 12, 18, 8};
    char Brand[10][20] = {
        "Nike",
        "Levis",
        "Puma",
        "Adidas",
        "Zara",
        "HM",
        "USPA",
        "Roadster",
        "AllenSolly",
        "Wrangler"
    };
    char ProductName[10][20] = {  "TShirt",
        "Jeans",
        "Hoodie",
        "Shirt",
        "Jacket",
        "Pant",
        "Kurta",
        "Sweater",
        "TrackPant",
        "Cargo"
    };

    char Size[10][5] = { "M","L","XL","M","S","L","XL","M","L","XXL"};
    int choice;
    do {
        printf("\n\n");
        printf("=====================================\n");
        printf("        TRENDS E-INVOICE SYSTEM\n");
        printf("=====================================\n");
        printf("1. Stock Available\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout and Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        while(choice < 1 || choice > 3) {
            printf("Invalid Choice!\n");
            printf("Enter your choice again : ");
            scanf("%d", &choice);
        }
        if(choice == 1) {
            printf("\n====================================================================================================\n");
            printf("ID\tBrand\t\tProduct\t\tSize\tQty\tMRP\t\tDiscount\n");
            printf("====================================================================================================\n");

            for(int i = 0; i < 10; i++) {
            printf("%d\t%-12s%-12s%s\t%d\t%.2f\t\t%.0f%%\n",  ProductID[i],Brand[i], ProductName[i],  Size[i],ProductQty[i],  MRP[i],Discount[i]);
            }
        }
        else if(choice == 2) {
            int pid;
            int qty;
            int found = 0;
            printf("\nEnter Product ID : ");
            scanf("%d", &pid);
            for(int i = 0; i < 10; i++) {
                if(ProductID[i] == pid) {
                    found = 1;
                    printf("Brand           : %s\n", Brand[i]);
                    printf("Product         : %s\n", ProductName[i]);
                    printf("Size            : %s\n", Size[i]);
                    printf("Available Stock : %d\n", ProductQty[i]);

                    printf("Enter Quantity To Purchase : ");
                    scanf("%d", &qty);

                    if(qty <= 0) {
                        printf("Invalid Quantity!\n");
                    }
                    else if(qty > ProductQty[i]) {
                        printf("Insufficient Stock Available!\n");
                    }
                    else {
                        float total;
                        float discountAmount;
                        float finalBill;
                        total = qty * MRP[i];
                        discountAmount = (total * Discount[i]) / 100;
                        finalBill = total - discountAmount;
                        ProductQty[i] = ProductQty[i] - qty;
                        printf("\n");
                        printf("=====================================\n");
                        printf("          TRENDS E-RECEIPT\n");
                        printf("=====================================\n");
                        printf("Product ID      : %d\n", ProductID[i]);
                        printf("Brand           : %s\n", Brand[i]);
                        printf("Product         : %s\n", ProductName[i]);
                        printf("Size            : %s\n", Size[i]);
                        printf("Quantity Bought : %d\n", qty);
                        printf("MRP             : %.2f\n", MRP[i]);
                        printf("Total Amount    : %.2f\n", total);
                        printf("Discount        : %.0f%%\n", Discount[i]);
                        printf("Discount Amount : %.2f\n", discountAmount);
                        printf("Final Bill      : %.2f\n", finalBill);
                        printf("Remaining Stock : %d\n", ProductQty[i]);
                        printf("=====================================\n");
                        printf("Thank You For Shopping!\n");
                        printf("=====================================\n");
                    }
                    break;
                }
            }
            if(found == 0) {
                printf("Product ID Not Found!\n");
            }
        }
        else if(choice == 3) {

            printf("\n=====================================\n");
            printf(" Thank You For Shopping At TRENDS!\n");
            printf(" Visit Again.\n");
            printf("=====================================\n");
        }

    } while(choice != 3);
    return 0;
}