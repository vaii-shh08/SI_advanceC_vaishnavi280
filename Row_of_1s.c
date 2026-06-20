#include <stdio.h>
int main (){
int a[4][4] = {{0,1,1,1} , 
              {0,0,1,1} ,
              {1,1,1,1} ,
              {0,0,0,0} };
int freq[4]= {0};
for(int i = 0 ; i<4 ; i++){
    for(int j = 0; j<4 ;j++){
        if(a[i][j] == 1)
        freq[i]++;
    }
}
int maxRow = 0;
for(int i = 0; i<4; i++){
    if(freq[i] > freq[maxRow]){
        maxRow = i;
    }
}
printf("Row with maximum 1s is %d",maxRow);
    return 0;
}