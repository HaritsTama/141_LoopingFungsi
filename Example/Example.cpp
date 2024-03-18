#include <iostream>
using namespace std;

int nTelur, nMie, nAir;
int hTelur = 2000, hMie = 2800, hAir = 3000;
string nama;

void Input() 
{
	cout << "Masukan nama = ";
	cin >> nama;
	cout << "Masukan Jumlah Telur = ";
	cin >> nTelur;
	cout << "Masukan Jumlah Mie = ";
	cin >> nMie;
	cout << "Masukan Jumlah Air Mineral = ";
	cin >> nAir;
}

int HitungHarga()
{
	return (nTelur * hTelur) + (nMie * hMie) + (nAir * hAir);
}

void Display() 
{
	cout << "Nama = " << nama << endl;
	cout << "Jumlah Telur = " << nTelur << "  | Harga Satuan Telur = " << hTelur << endl;
	cout << "Jumlah Mie = " << nMie << "    | Harga Satuan Mie = " << hMie << endl;
	cout << "Jumlah Air = " << nAir << "    | Harga Satuan Air = " << hAir << endl;
	cout << "Total Harga Rp." << HitungHarga() << endl;
}

int main() 
{
	char pilihan;

	do {
		Input();
		Display();

		cout << "Apakah anda ingin mengulangi? (y/n)";
		cin >> pilihan;

		system("cls");
	} 
	while (pilihan == 'y' || pilihan == 'Y');
	
	
}

