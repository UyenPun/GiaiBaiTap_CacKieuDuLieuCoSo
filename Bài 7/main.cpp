#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b;
	float Tong, Hieu, Tich, Thuong;

	printf("\nNhap a = ");
	scanf("%f", &a);

	printf("\nNhap b = ");
	scanf("%f", &b);

	Tong = a + b;
	Hieu = a - b;
	Tich = a * b;
	Thuong = a / b;
	

	printf("\n%f + %f = %f", a, b, Tong);
	printf("\n%f - %f = %f", a, b, Hieu);
	printf("\n%f * %f = %f", a, b, Tich);
	
	b == 0 ? printf("\nb la so 0 nen khong the chia duoc") :  printf("\n%f / %f = %f", a, b, Thuong);

	getch();
	return 0;
}