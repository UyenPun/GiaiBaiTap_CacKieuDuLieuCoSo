#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main()
{
	float bankinh;
	float chuvi, dientich;

	printf("\nNhap vao ban kinh: ");
	scanf("%f", &bankinh);

	chuvi = bankinh * 2 * PI;
	dientich = bankinh * bankinh * PI;

	printf("\nChu vi = %f", chuvi);
	printf("\nDien tich = %f", dientich);

	getch();
	return 0;
}