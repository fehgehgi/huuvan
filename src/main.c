#include<stdio.h>
int main(){
	float bk, cv,dt;
	const float PI = 3.14;
	printf(" nhap ban kinh:"); scanf("%f", &bk);
	cv=2*bk*PI;
	dt= PI*bk*bk;
	printf(" chu vi hinh tron : %f\n", cv);
	printf(" dien tich hinh tron: %f", dt);
	return 0; 
} 