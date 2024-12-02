#include <iostream>
using namespace std;

int main(){
/*     bool dogruluk = false;

    if (dogruluk == true){ // if içerisinde koşul kontrolü için == kullanılır. = bir atama operatörü, == ise karşılaştırma operatörüdür.
        cout << "Dogru!";
    } else {
        cout << "Yanlis!";
    } */

   cout << "Yasinizi girin: ";
    int yas;
    cin >> yas;
    cout << "Yasiniz: " << yas << endl;

    if (yas < 18 && yas > 0) {
        cout << "18 yasindan kucuksunuz.";
    }

    else if (yas < 1) {
        cout << "Yas 1'den kucuk olamaz.";
    }

    else if (yas > 100) {
        cout << "Yas 100'den buyuk olamaz.";
    }

    else {
        cout << "18 yasindan buyuksunuz.";
    }
}

/* 
NOTLAR:
1- if içerisinde koşul kontrolü için == kullanılır. = bir atama operatörü, == ise karşılaştırma operatörüdür.
2- if-else yapısında bir koşul sağlanırsa if bloğu çalışır, sağlanmazsa else bloğu çalışır.
3- else if bloğu, if bloğu sağlanmadığında çalışır.
4- && operatörü, iki koşulun da sağlanması durumunda çalışır.
5- || operatörü, iki koşuldan birinin sağlanması durumunda çalışır.
 */