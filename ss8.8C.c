#include <stdio.h>

int main(){
	int m,n,sum;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i =0; i<3; i++){
		for(int j =0; j<3; j++){
			if (i == 0 && j==2 || i == 1 && j==1 || i == 2 && j ==0){
				printf("%d\n", arr[i][j]);
                sum += arr[i][j];
            }
		}
			}
    printf("Tong cac phan tu tren duong cheo cua ma tran la: %d\n", sum);

	}
