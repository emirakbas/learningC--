#include <iostream> // Include yönergesi ile iostream kütüphanesi projeye dahil edildi. Include genellikle kütüphaneleri projeye dahil etmek için kullanılır.
using namespace std; // Eğer bu satırı yazmasaydık cout ve endl gibi standart kütüphane fonksiyonlarını yazarken her satırda std::cout ve std::endl şeklinde yazmamız gerekecekti.
// std::cout << "Merhaba Dünya!" şeklinde yazmamız gerekecekti. Her satırda std::cout ve std::endl yazmak yerine using namespace std; yazarak bu fonksiyonları altta sadece cout kullanarak yazabiliriz.
int main(){ // main fonksiyonu programın başlangıç noktasıdır. Programın çalıştırılmasıyla birlikte ilk olarak main fonksiyonu çalıştırılır.
    cout << "Merhaba Dunya!" << endl; // cout, standart çıkış akışıdır. Bu akışa veri yazdırmak için kullanılır.
    cout << "Hello World!" << endl; // endl, bir satır sonu karakteridir. Bu karakter sayesinde bir sonraki yazdırılacak veri bir alt satırdan başlar.
}

/* NOTLAR:
1- << Operatörü: cout << "Merhaba Dunya!"; şeklinde yazdığımızda << operatörü, cout akışına "Merhaba Dunya!" yazısını yazdırır. (YORUM SATIRI KISAYOLU: ALT+SHIFT+A)
2- Noktalı Virgül: C++ dilinde her komutun sonuna noktalı virgül (;) konulmalıdır. Kütüphane içe aktardığımız kısımlarda genelde noktalı virgül kullanılmaz.
3- main Fonksiyonu: Programın başlangıç noktasıdır. Programın çalıştırılmasıyla birlikte ilk olarak main fonksiyonu çalıştırılır.
4- using namespace std;: Eğer bu satırı yazmasaydık cout ve endl gibi standart kütüphane fonksiyonlarını yazarken her satırda std::cout ve std::endl şeklinde yazmamız gerekecekti.
5- #include <iostream>: Include yönergesi ile iostream kütüphanesi projeye dahil edildi. Include genellikle kütüphaneleri projeye dahil etmek için kullanılır.
6- cout: cout, standart çıkış akışıdır. Bu akışa veri yazdırmak için kullanılır.
7- endl: endl, bir satır sonu karakteridir. Bu karakter sayesinde bir sonraki yazdırılacak veri bir alt satırdan başlar.
8- Süslü Parantezler: main fonksiyonunun başlangıç ve bitiş noktalarını belirler. main fonksiyonu süslü parantezler arasında tanımlanır.
 */