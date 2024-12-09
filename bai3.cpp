#include<stdio.h>
int  tinhGiaithua(int n){
	int result = 1;
	for(int i =1;i<=n;i++){
		result *= i; 
	}
	return result; 
} 
int main(){
	int number; 
	printf("moi ban nhap so can tinh:");
	scanf("%d",&number);
	int result = tinhGiaithua(number);
	printf("Giai thua cua %d la %d",number,result); 
	return 0; 
} 

