#include <stdio.h>
#include <conio.h>

int main()
{
	float diemtoan, diemly, diemhoa;
	int hesotoan, hesoly, hesohoa;
	float diemtrungbinh;

	printf("\nNhap vao diem toan: ");
	scanf("%f", &diemtoan);

	printf("\nNhap vao he so toan: ");
	scanf("%d", &hesotoan);

	printf("\nNhap vao diem ly: ");
	scanf("%f", &diemly);

	printf("\nNhap vao he so ly: ");
	scanf("%d", &hesoly);

	printf("\nNhap vao diem hoa: ");
	scanf("%f", &diemhoa);

	printf("\nNhap vao he so hoa: ");
	scanf("%d", &hesohoa);

	diemtrungbinh = (diemtoan * hesotoan + diemly * hesoly + diemhoa * hesohoa) / (hesotoan + hesoly + hesohoa);
	printf("\nDiem trung binh = %f", diemtrungbinh);
	
	getch();
	return 0;
}