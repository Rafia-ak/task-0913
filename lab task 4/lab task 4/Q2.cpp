#include <stdio.h>
int main(){
	int units; float bill;
	printf("Enter units: ");
	scanf("%d", &units);
	if (units<=30){
		bill = 0.6*30;
	}
	else if(units>30 && units<=110){
		bill = 0.6*30 + 0.85*(units-30);
	}
	else if(units>110 && units<=210){
		bill = 0.6*30 + 0.85*80 + 1.3*(units-110);
	}
	else if(units>210){
		bill = 0.6*30 + 0.85*80 + 1.3*110 + 1.6*(units-210);
	}
	bill = bill + bill*0.15;
	printf("Your bill is %f",bill);
}
