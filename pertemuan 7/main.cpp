#include <iostream>

using namespace std;

int main()
{
//soal 1
   int a;
    cout << "Masukkan Bilangan: ";
    cin >> a;
     if(a % 2 == 0 && a > 25 && a < 50){
    cout << "1. Bilangan sesuai" << endl;
     }
//soal 2
     if (a % 2 == 1 && (a > 13 || a < 5)) {
    cout << "2. Bilangan Sesuai" << endl;
     }
//soal 3
    if ((a > 25 && a < 50) || (a % 2 == 1 && a > 3 && a < 15)) {
    cout << "3. Bilangan sesuai" << endl;
    }

    return 0;
}
