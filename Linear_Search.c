#include <stdio.h>
int main (){
    int a[5] = {60, 77 , 95, 33 ,100};
    int target_ele , i ;
    printf("Enter the targeted element : ");
    scanf("%d",&target_ele);
    for(int i = 0; i<5 ; i++){
        if(a[i] == target_ele){
            printf("Data Found at %d index number!", i);
            break;
        }
    }
    if(i == 5){
        printf("Data Not Found!");
    }
}