#include <iostream>
using namespace std;

int main()
{

    int i;

    for (i = 1; i <= 6; i++) {
        cout << i + 1 << "." "Nama saya adalah Tama" << endl;
    }

    string arr[5];

    for (i = 0; i < 5; i++) {
        cout << "Masukan Nickname = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "Namanya adalah = " << arr[i] << endl;
    }


    return(0);
}


