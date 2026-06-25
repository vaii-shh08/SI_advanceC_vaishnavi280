// ROLL NO. - 280
// TRENDS Online Inventory & E-Invoice System

#include <stdio.h>

typedef struct
{
    int id;
    char brand[20];
    char product[20];
    char size[5];
    int stock;
    float price;
    float discount;
} Product;

int main()
{
    Product p[10] = {
        {4567,"Nike","TShirt","M",1,1200,10},
        {2345,"Levis","Jeans","L",4,1800,15},
        {8896,"Puma","Hoodie","XL",5,1500,20},
        {9990,"Adidas","Shirt","M",8,2500,5},
        {2314,"Zara","Jacket","S",7,2200,25},
        {7867,"HM","Pant","L",9,1700,10},
        {4433,"USPA","Kurta","XL",6,3000,30},
        {1232,"Roadster","Sweater","M",1,1100,12},
        {8976,"AllenSolly","TrackPant","L",2,1400,18},
        {5645,"Wrangler","Cargo","XXL",5,2000,8}
    };

    int choice;

    do
    {
        printf("\n==============================\n");
        printf("     TRENDS INVENTORY MENU\n");
        printf("==============================\n");
        printf("1. View Stock\n");
        printf("2. Purchase Product\n");
        printf("3. Checkout and Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("\n-------------------------------------------------------------------------------\n");
            printf("ID\tBrand\t\tProduct\t\tSize\tStock\tPrice\tDiscount\n");
            printf("-------------------------------------------------------------------------------\n");

            for(int i=0;i<10;i++)
            {
                printf("%d\t%-12s%-12s%-5s\t%d\t%.0f\t%.0f%%\n",
                       p[i].id,
                       p[i].brand,
                       p[i].product,
                       p[i].size,
                       p[i].stock,
                       p[i].price,
                       p[i].discount);
            }
        }
        else if(choice == 2)
        {
            int id, qty;
            int found = 0;
            printf("\nEnter Product ID : ");
            scanf("%d",&id);
            for(int i=0;i<10;i++)
            {
                if(id == p[i].id)
                {
                    found = 1;
                    printf("\nBrand : %s\n",p[i].brand);
                    printf("Product : %s\n",p[i].product);
                    printf("Available Stock : %d\n",p[i].stock);
                    printf("\nEnter Quantity : ");
                    scanf("%d",&qty);

                    if(qty <= 0)
                    {
                        printf("\nInvalid Quantity!\n");
                    }
                    else if(qty > p[i].stock)
                    {
                        printf("\nStock Not Available!\n");
                    }
                    else
                    {
                        float amount = qty * p[i].price;
                        float discount = amount * p[i].discount / 100;
                        float bill = amount - discount;

                        p[i].stock -= qty;

                        printf("\n========== E-INVOICE ==========\n");
                        printf("Product ID      : %d\n",p[i].id);
                        printf("Brand           : %s\n",p[i].brand);
                        printf("Product         : %s\n",p[i].product);
                        printf("Quantity        : %d\n",qty);
                        printf("Amount          : %.2f\n",amount);
                        printf("Discount Amount : %.2f\n",discount);
                        printf("Final Bill      : %.2f\n",bill);
                        printf("Remaining Stock : %d\n",p[i].stock);
                        printf("===============================\n");
                    }

                    break;
                }
            }
            if(found == 0)
            {
                printf("\nProduct Not Found!\n");
            }
        }
        else if(choice == 3)
        {
            printf("\nThank You For Shopping At TRENDS!\n");
        }
        else
        {
            printf("\nInvalid Choice!\n");
        }
    } while(choice != 3);
    return 0;
}