#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int islem, yukseklik, taban, kenar, yaricap, a, b, c, d;
	float sonuc;
	const double pi = 3.14;
	char ch{};
	do {
		system("PAUSE");
		system("CLS");
		cout << "Alanini Hesaplamak Istediginiz Geometrik Seklin Numarasini Giriniz" << endl;
		cout << "1-Cember Alani:" << endl;
		cout << "2-Ucgen Alani:" << endl;
		cout << "3-Dikdortgen Alani:" << endl;
		cout << "4-Yamuk Alani" << endl;
		cout << "5-Duzgun Altigen Alani" << endl;
		cout << "6-Cikis" << endl;
		cout << endl;
		cout << "Secim: " << endl;
		cin >> islem;

		switch (islem)
		{
		case 1:
			cout << "Yaricapi Giriniz: ";
			cin >> yaricap;
			sonuc = (yaricap * yaricap * pi);
			cout << "Cemberin Alani: " << sonuc<<endl;
			break;
		case 2:
			cout << "Taban Uzunlugunu ve Yuksekligini Giriniz: "<<endl;
			cout << "taban: ";
			cin >> taban;
			cout << "yukseklik: ";
			cin >> yukseklik;
			sonuc = ((float)taban * yukseklik / 2);
			cout << "Ucgenin Alani:" << sonuc<<endl;
			break;
		case 3:
			cout << "Uzun Kenari ve Kisa Kenari Giriniz:"<<endl;
			cout << "Uzun Kenar:";
			cin >> a;
			cout << endl;
			cout << "Kisa Kenar:";
			cin >> b;
			sonuc = (a * b);
			cout << "Dikdortgenin Alani:" << sonuc<<endl;
			break;
		case 4:
			cout << "Ust Kenari,Alt Kenari ve Yuksekligi Giriniz:"<<endl;
			cout << "Ust Kenar:";
			cin >> c;
			cout << "Alt Kenar:";
			cin >> d;
			cout << "Yukseklik:";
			cin >> yukseklik;
			sonuc = (((static_cast<float>(c) + d) / 2) * yukseklik);
			cout << "Yamugun Alani:" << sonuc<<endl;
			break;
		case 5:
			cout << "Kenari Giriniz:";
			cin >> kenar;
			sonuc = ((float)(kenar * kenar * 3 * 1.73) / 2);
			cout << "Altigenin Alani:" << sonuc<<endl;
			break;
		case 6:
			cout << "Programdan Cikilsin Miİ?(y/n)";
			cin >> ch;
			break;
		default:
			cout << "Lutfen yukarıdaki rakamlardan birini seciniz." << endl;
			break;
		}
	} while (ch != 'y');
}
	


