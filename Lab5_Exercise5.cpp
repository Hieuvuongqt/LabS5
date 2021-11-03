#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("Enter a = ");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Enter b = ");
		scanf("%d",&b);
	}while(b<=a);
	for(int i=a;i<=b;i++){
		int count = 0;
		for(int j=i;j<=i/2;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("Prime: %d\n",i);
		}
	}
}
