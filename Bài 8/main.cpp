#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned int soluong, dongia, tien,thue;

	printf("\nNhap vao so luong mua: ");
	scanf("%u", &soluong);

	printf("\nNhap vao don gia 1 cai: ");
	scanf("%u", &dongia);

	tien = soluong * dongia;
	thue = 0.1 * tien;

	printf("\nTien = %u", tien);
	printf("\nThue = %u", thue);

	getch();
	return 0;
}