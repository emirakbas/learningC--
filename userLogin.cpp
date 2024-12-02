#include <iostream>
using namespace std;

int main(){
    string username;
    string password;
    cout << "Kullanici adi: ";
    //cin >> username; // cin ile alınan değerlerde boşluktan sonra girilen hiçbir değer alınmaz. Eğer kullanıcının ismi iki ayrı kelimeden oluşuyorsa yalnızca ilk girilen kelime alınır.
    getline(cin, username); // getline ile alınan değerlerde boşluktan sonra girilen tüm değerler alınır.
    cout << "Sifre: ";
    //cin >> password;
    getline(cin, password); // getline ile değer alınırken >> işaretleri kullanılmaz.
    cout << "Merhaba " << username << ", Hos geldiniz!";

}