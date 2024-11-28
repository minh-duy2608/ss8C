#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int count = 0;
	int num;
	printf("Moi ban nhap vao 1 so tu 1 den 5:");
	scanf("%d",&num);
	for(int i=0; i<5; i++){
	if(arr[i]==num){
		printf("vi tri phan tu trong mang la %d",i+1);
		count++;
		break;
	}
}
	if(count==0){
	printf("phan tu khong ton tai trong mang");
}

}
