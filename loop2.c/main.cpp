#include <iostream>

using namespace std;

int main()
{
    //soal 2
    int i;
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 1){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
