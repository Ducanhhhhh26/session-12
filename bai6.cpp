#include<stdio.h>
int ferfectNumber(int n){
	if(n<=0){
		return 0; 
	} 
	int sum=0;
	for(int i =1;i<n;i++){
		if(n%i==0) {
			sum+=i;
		}
	}
	return (sum ==n); 
} 
int main(){
	int number1,number2; 
	int count; 
	printf("Moi ban nhap vao so nguyen thu nhat:");
	scanf("%d",&number1);
	printf("moi ban nhap vao so nguyen thu hai:");
	scanf("%d",&number2);
	if(ferfectNumber(number1)){
		printf("%d la so hoan hao \n",number1); 
		 
	}else{
		printf("%d khong phai la so hoan hao\n",number1); 
	}
	if(ferfectNumber(number2)){
		printf("%d la so hoan hao \n",number2); 
	} else{
		printf("%d khong phai la so hoan hao\n",number2); 
	}
	return 0; 
} 
