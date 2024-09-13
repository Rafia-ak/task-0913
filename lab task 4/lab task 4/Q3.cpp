#include <stdio.h>
int main(){
	float discount, amount, cost;
	printf("Enter cost: ");
	scanf("%f", &cost);
	if (cost<1500){
		discount = 0.07*cost;
		amount = cost - discount;
	}
	else if (cost>=1500 && cost<3000){
		discount = 0.12*cost;
		amount = cost - discount;
	}
	else if (cost>=3000 && cost<=5000){
		discount = 0.22*cost;
		amount = cost - discount;
	}
	else if (cost>5000){
		discount = 0.3*cost;
		amount = cost - discount;
	}
	printf("Original amount: %f\n", cost);
	printf("Amount saved due to the discount: %f\n", discount);
	printf("Amount after applying the discount is: %f\n", amount);
	
	
}