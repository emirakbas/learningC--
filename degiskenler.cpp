#include <iostream>
using namespace std;
string isim = "Mücahid"; // Değişken ataması yaparken = kullanılır.
int yas = 20;
const double pi = 3.14; // Değişkenin sabit olduğunu belirtmek için const kullanılır ve bu sonradan değiştirilemez.
bool dogru = true;
int bos_deger; // Değişken tanımlanırken değer ataması istenilirse boş bırakılabilir ve değer sonradan atanabilir.
int eski_deger = 5;
int yeni_deger = 10;
int main(){
    cout << "Merhaba " << isim << "!" << endl;
    eski_deger = yeni_deger; // Bir değişkenin değeri başka bir değişkene atanabilir. Burada eski_deger değişkeninin değeri yeni_deger değişkeninin değerine eşitlenmiştir.
}

/* 1- string: Metinsel ifadeler için kullanılır.
2- int: Tam sayılar için kullanılır.
3- double: Ondalıklı sayılar için kullanılır.
4- bool: Mantıksal ifadeler için kullanılır. 
5- Değişkenler main() içine yazılabilse de genelde main() dışında yazılması tercih eiliyormuş.
6- Değişken tanımlanırken değer ataması istenilirse boş bırakılabilir ve değer sonradan atanabilir.
7- Aynı değişkenin her zaman en son girilen değeri geçerlidir.
8- Değişkenin sabit olduğunu belirtmek için const kullanılır ve bu sonradan değiştirilemez.
*/
