#include <stdio.h>

int main(){
	int i,j;
	int number[3][3]= {{1,2,3},{3,4,5}};
	int max = number[0][0];
	for (int i=0; i<3; i++){
		for (j=0; j<3; j++){
			
		if(number[i][j] > max){
		max = number[i][j];
	

		}
		}
	}
		printf("So lon nhat la %d\n", max);
}
	

