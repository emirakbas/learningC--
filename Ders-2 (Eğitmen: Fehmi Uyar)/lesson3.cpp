#include <iostream>

using namespace std;

int main() {

    cout << "test\n";
    cout << "C++ is awesome!" << endl;
    cout << endl; // Boş bir satır bırakır.
    cout << "Insan\n" << "Ne\n" << "ile\n" << "Yasar" << endl; // endl yerine \n kullanılabilir.
    cout << "Bir tab" << "\tbosluk" << endl; // \t bir tab kadar boşluk bırakır.
    cout << " \" " << endl; // Çift tırnak karakterini yazdırır.

    return 0;

}

/* (ctrl shift a yorum satırı.)

1-endl --> End Line. Satır sonu. Alt satıra geçirir.
2-Escape Sequence --> Kaçış karakterleri.
3-\n --> Alt satıra geçirir. endl yerine kullanılır.
4-\t --> Bir tab boşluk bırakır.
5-Eğer back slash'ın character olarak algılanmasını istiyorsak iki adet \\ yazarak çıktıda tek bir adet \ elde edebiliriz.
6-Çift tırnağı karakter olarak yazdırmak için \" kullanılır. cout << " \" "; --> " karakterini yazdırır.



*/
