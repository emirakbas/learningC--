#include <iostream>
#include <cmath> // Matematiksel işlemler için kullanılır.
using namespace std;

int a = 3;
int b = 6;
double c = 11;

int main(){
/*     cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << c/a << endl;
    cout << a/c << endl;

    cout << a + c << endl; // Farklı veri türleri birbirleriyle toplanabilir.
    cout << a + 30 << endl; // Bir sayı ile bir değişken toplanabilir.
    a = a + 30; // Bir değişkenin değeri başka bir sayı ile toplanarak değiştirilebilir.

    a++; // Değişkenin değeri yazdırıldıktan sonra bir arttırılır.
    cout << a << endl;

    a--; // Değişkenin değeri yazdırıldıktan sonra bir azaltılır.
    cout << a << endl; */

    cout << "Sayi 1: ";
    cin >> a;
    cout << "Sayi 2: ";
    cin >> b;
    cout << "Toplam: " << a + b << endl;

    cout << "Karekok: " << sqrt(a) << endl; // sqrt fonksiyonu karekök almak için kullanılır.
    cout << max(a, b) << endl; // max fonksiyonu iki sayıdan büyük olanı döndürür.
    cout << min(a, b) << endl; // min fonksiyonu iki sayıdan küçük olanı döndürür.
    cout << round(3.6) << endl; // round fonksiyonu bir sayıyı en yakın tam sayıya yuvarlar.
    cout << log(2) << endl; // log fonksiyonu bir sayının e tabanındaki logaritmasını alır.
    cout << log10(100) << endl; // log10 fonksiyonu bir sayının 10 tabanındaki logaritmasını alır.
    cout << abs(-4) << endl; // abs fonksiyonu bir sayının mutlak değerini alır.
}