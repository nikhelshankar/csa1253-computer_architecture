#include<stdio.h>	
int power(a,b){
	int i,powr=1;
	for(i=0;i<b;i++){
		powr=powr*a;
	}return powr;
}
void main()
{
	
	int a[10],n=3,i,sum=0;
	printf("Enter the Binary Length: ");
	scanf("%d",&n);
	printf("\nEnter the Binary Value: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum = sum + (a[n-i-1] * power(2,i));
	}
	printf("\n %d is the decimal Value", sum);
}
