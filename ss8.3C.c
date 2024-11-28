#include<stdio.h>

int main() {
    int a;  
    printf("Nhap vao kich thuoc ma tran vuong: ");
    scanf("%d", &a); 
    int arr[a][a]; 
    for (int i = 0; i<a; i++) {
        for (int j = 0; j<a; j++) {
            printf("Nhap phan tu o vi tri hang %d, cot %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);  
        }
    } 
    
    for (int i = 0; i<a; i++) {
        for (int j = 0; j<a; j++) {
            printf("%3d ", arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
