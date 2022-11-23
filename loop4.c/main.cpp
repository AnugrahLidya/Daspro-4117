#include <iostream>

using namespace std;

int main()
{
    //soal 4
    int x;
    float rata,jum;
    for (int x = 1; x <= 20; x++){
        cout << x << endl;
        jum += x;
    }
    rata=jum/20;

    cout<<endl;
    cout<<"Nilai Jumlah = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
    return 0;
}
