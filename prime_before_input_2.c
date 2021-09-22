#include<stdio.h>
int main(){
	int num,i,j,check;
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("Prime Number are : ");
	for(i=2;i<=num-1;i++){
		check=0;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				check=1;
				break;
			}
		}
		if(check==0){
			printf("%d ",i);
		}
	}
}