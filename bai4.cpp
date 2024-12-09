#include<stdio.h>
int timMax(int arr[],int size){
	int max=arr[0];
	for(int i =0;i<size;i++){
		if(arr[i]>max){
			max = arr[i]; 
		} 
	}
	return max; 
}
int main(){
	int n; 
	printf("Moi ban nhap phan tu cho mang:");
	scanf("%d",&n);
	int arr[n]; 
	for(int i = 0 ;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]); 
	} 
	for(int i =0;i<n;i++){
		printf("gia tri cua arr[%d] la %d\n",i,arr[i]); 
	}
	int max = timMax(arr,n);
	printf("So lon nhat trong mang la: %d",max);  
	return 0; 
} 
 
