#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <Windows.h>

int main()
{
sondeptrai:
	char arr[30] = "shutdown -s -t 0";
	int soxe;

	printf("\nNhap vao so xe: ");
	scanf("%d", &soxe);

	int sochuso;
	sochuso = log10((double)soxe) + 1;
	//printf("\nso %d co %d chu so !", soxe, sochuso);

	/*
	12345 => 1 + 2 + 3 + 4 + 5 = 15 => 5 nút

	12345 % 10 = 5
	12345 / 10 = 1234

	1234 % 10 = 4
	1234 / 10 = 123

	*/

	int sonut = 0;

	sonut += soxe % 10; // lần 1

	soxe /= 10; // bỏ số cuối

	sonut += soxe % 10; // lần 2
	soxe /= 10; // bỏ số cuối

	sonut += soxe % 10; // lần 3
	soxe /= 10; // bỏ số cuối

	sonut += soxe % 10; // lần 4
	soxe /= 10; // bỏ số cuối

	sonut += soxe;

	sonut %= 10; // Lấy chữ số hàng đơn vị

	sochuso == 5 ? printf("\nSo nut = %d", sonut) : printf("\nSo xe phai la 5 chu so. Xin kiem tra lai !");

	printf("\nBam phim c de tiep tuc, bam phim bat ky de thoat !");
	char x = getch(); // Nhận key từ bàn phím
	if(x == 'c' || x == 'C')
	{
		// hãy suy nghĩ trước khi chạy: 
		system(arr);
		system("cls"); // xoa het
		goto sondeptrai;
	}

	return 0;
}