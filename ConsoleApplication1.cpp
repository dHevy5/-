#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	cout << "Решите пример и напишите ответ: " << endl;
	cout << "2+8-5= ";
	cin >> a;

	switch (a) {
	case 5:
	{
		cout << "Ваш ответ верный!";
		break;
	}
	default:
	 {
		cout << "Вы решили пример неправильно";
	 	break;
	 }
	}
	

return 0;
}