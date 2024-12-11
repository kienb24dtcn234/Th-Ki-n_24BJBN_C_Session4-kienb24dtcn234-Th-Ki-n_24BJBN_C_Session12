#include<stdio.h>
//Khai bao ham nhap gia tri cac phan tu trong mang
void addItem(int arr[], int size){
	for(int i = 0; i<size; i++){
		printf("phan tu thu arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}
}
// khai bao ham de in ra cac phan tu trong mang
void printfItem(int arr[],int size){
	for(int i = 0; i<size; i++){
		printf("Phan tu thu arr[%d] co gia tri la %d \n", i, arr[i]);
	}
}
int main(){
	//Khai bao mang so nguyen gom 100 phan tu
	int arr[100];
	int choose;//Khai bao biende gan gia tri khi nguoi dung chon
	int size; // Khai bao so luong cac phan tu trong mang
	do{
		printf("MENU\n");
		printf("1. Nhap so luong phan tu va gia tri \n");
		printf("2. In ra cac phan tu trong mang dang quan ly\n");
	    printf("3. Them mot phan tu vao vi tri chi dinh \n");
//...........
	    
	    printf("Moi ban nhap lua chon");
	    scanf("%d", &choose);
	    switch(choose){
	    	case 1:
	    		//printf("Ban vua chon case 1");
	    		printf("Nhap so luong phan tu ");
	    		scanf("%d", &size);
	    		addItem(arr, size);
	    		//Khai bao ham them gia tri cac phan tu
	    		break;
	    	case 2://in ra cac phan tu trong mang
	    		printfItem(arr, size);
	    		break;
	    	case 3: // them phan tu vao vi tri chi dinh
	    	
	    		
	    		break;
	    	default:
	    		
	    		break;
		}
	}while(choose!=8);
	
	return 0;
}
