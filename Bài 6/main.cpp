#include <stdio.h> // Thư viện nhập xuất chuẩn
#include <conio.h>  // Thư viện chứa getch dừng màn hình
#include <time.h>

// Hàm chính
int main()
{
	// Khai báo biến.
	int namsinh, namhientai, tuoi;

	// Bước 1: Nhập năm sinh
	printf("\nNhap vao nam sinh: ");
	scanf("%d", &namsinh);

	// Bước 2: Tính tuổi
	// namhientai = 2015;
	/*
	nhu cầu lấy thời gian hiện tại ?
	search google nhe
	lấy thời gian hiện tại trong C/C++
	how to select year now in c/c++
	*/

	// Lấy năm hiện tại từ máy tính
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	namhientai = Now ->tm_year + 1900;

	tuoi = namhientai - namsinh;
	
	// Bước 3: Xuất kết quả
	printf("\nBan sinh nam %d => ban %d tuoi !", namsinh, tuoi);
	
	getch();
	return 0;
}

