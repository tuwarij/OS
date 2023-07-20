#include <stdio.h>
int main(){
	int a;
	int b = 0;
	int cnt = 0;
	float avg = 0.00;
	while(a > 0){
        	printf("pls enter number: ");
		scanf("%d",&a);
		if(a > 0){
			b += a;
			cnt++;
		}
	}
	avg = b/(float)cnt;
	printf("Your summation is : %d\n ",b);
	printf("Your average is : %f\n ",avg); 
	return 0;
}

