

#include <iostream>
using namespace std;
int main()
{
	int thang, nam;
	cout << ("Nhap vao Thang Trong nam"); cin >> thang;
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << ("\nThang day co 31 ngay", thang);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << ("\nThang day co 31 ngay ", thang);
		break;
	case 2:
		cout << ("\n  2 co 28 hoac 29 ngay", thang);
	default:
		cout << "\nKhong co thang day";
	}
	return 0;
}
