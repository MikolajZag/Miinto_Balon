// M// Miinto.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Balon{

public:

    string nazwa;
    float wysokosc;  //[m]
    float srednica; //[cm]


    Balon() {
        nazwa = "Balonik";
        wysokosc = 10;
        srednica = 40;
    };
    Balon(string n, float w, float s) {
        nazwa = n;
        wysokosc = w;
        srednica = s;
        
    };
    Balon(const Balon& bal){
        nazwa = bal.nazwa;
        wysokosc = bal.wysokosc;
        srednica = bal.srednica;
    };

    void /* balon:: */ zmienWysokosc(float przyrost_wysokosci){
        if (przyrost_wysokosci < 0){
            cout << "Podaj liczbe nie ujemną!" << endl;
        }
        else {
            wysokosc += przyrost_wysokosci;
        }

    };
    void /* balon:: */ zmien_srednice(float nowa_srednica) {
        if (nowa_srednica < 0){
            cout << "Podaj liczbe nie ujemną!" << endl;
        }
        else {
            srednica += nowa_srednica;
        }
    };

    void balon_naekran(){
        cout << "Wysokosc balona wynosi[m]: " << wysokosc << endl;
        cout << "Srednica balona wynosi[cm]: " << srednica << endl;
    };


};

Balon& pompuj(Balon& balonik, float pow) {
    if (pow < 0) {
        cout << "Powierzchnia nie moze byc liczba ujemna!" << endl;
    }
    else {

        balonik.zmien_srednice(sqrtf(pow / 3.14) * 2);
        return balonik;
    }
   
}

    int main(){
        Balon b1 = Balon("BalonPierwszy", 12, 30);
        pompuj(b1, 23);
        cout <<"Srednica po dopompowaniu balona o nazwie "<<b1.nazwa <<" wynosi: "<< b1.srednica<<endl;
    
        Balon b2 = Balon("BalonDrugi", 6, 40);
        pompuj(b2, 200);
        cout << "Srednica po dopompowaniu balona o nazwie " << b2.nazwa << " wynosi: " << b2.srednica << endl;

        Balon b3 = Balon("BalonTrzeci", 4, 60);
        pompuj(b3, 100);
        cout << "Srednica po dopompowaniu balona o nazwie " << b3.nazwa << " wynosi: " << b3.srednica << endl;
       
        
    
    return 0;

}

