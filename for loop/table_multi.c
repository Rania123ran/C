#include <stdio.h>
#include <stdlib.h>
//Input upto the table number starting from 1 : 8
//Expected Output :
//Multiplication table from 1 to 8
//1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
//...
//1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
int main (){
    int n ;
    printf("Input upto the table number starting from 1 :");
    scanf("%d",&n);
    while(n<1 || n>10){
        printf("Input upto the table number starting from 1 :");
        scanf("%d",&n);
    }
for(int i=1;i<=10;i++){
for(int j=1;j<=n;j++){
        printf("%d x %d = %d ,",j,i,j*i);

}
printf("\n");
}


}
