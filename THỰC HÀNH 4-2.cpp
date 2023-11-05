//Nhập số tháng trong năm
//Kiểm tra xem tháng đó có hợp lệ hay ko ? Nếu có, thì in ra quý tương ứng và số ngày trong tháng đó

#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Nhap thang: "; cin >> month;

	switch (month)
	{
	case 1: cout << "thang " << month << " thuoc quy 1 va co 31 ngay"; break;
	case 2: cout << "thang " << month << " thuoc quy 1 va co 29 ngay"; break;
	case 3: cout << "thang " << month << " thuoc quy 1 va co 31 ngay"; break;
	case 4: cout << "thang " << month << " thuoc quy 2 va co 30 ngay"; break;
	case 5: cout << "thang " << month << " thuoc quy 2 va co 31 ngay"; break;
	case 6: cout << "thang " << month << " thuoc quy 2 va co 30 ngay"; break;
	case 7: cout << "thang " << month << " thuoc quy 3 va co 31 ngay"; break;
	case 8: cout << "thang " << month << " thuoc quy 3 va co 31 ngay"; break;
	case 9: cout << "thang " << month << " thuoc quy 3 va co 30 ngay"; break;
	case 10: cout << "thang " << month << " thuoc quy 4 va co 31 ngay"; break;
	case 11: cout << "thang " << month << " thuoc quy 4 va co 30 ngay"; break;
	case 12: cout << "thang " << month << " thuoc quy 4 va co 31 ngay"; break;
	default: cout << "thang khong hop le";
	}
}