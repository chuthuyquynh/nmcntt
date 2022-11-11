// Viết chương trình đồng hồ đếm ngược hiển thị trên màn hình 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int phut, giay;
	do
	{
		cout << "Nhap vao so phut: ";
		cin >> phut;
		cout << "Nhap vao so giay: ";
		cin >> giay;
	} while (phut < 0 && phut > 60 && giay < 0 && giay > 60);

	while (phut >= 0 && phut <= 60 && giay >= 0 && giay <= 60)
	{
		cout << setw(2) << setfill('0') << phut << " : ";
		if (phut == 0)
		{
			if (1 <= giay && giay <= 5)
				cout << setw(2) << setfill('0') << giay << " Tich tac \n";
			else if (phut == 0 && giay == 0)
			{
				cout << setw(2) << setfill('0') << giay << " Reng reng reng \n";
			}
			else
			{
				cout << setw(2) << setfill('0') << giay << endl;
			}
			giay--;
		}

		if (phut >= 1)
		{
			cout << setw(2) << setfill('0') << giay << endl;
			if (giay == 0)
			{
				phut--;
				giay += 60;
			}
			giay--;
		}
	}
		return 0;
}