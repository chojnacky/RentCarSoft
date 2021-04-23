//
//  Flota.hpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 10/03/2021.
//

#ifndef Flota_hpp
#define Flota_hpp

#include "Pojazd.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
class Flota {
private:
    Pojazd** flota;
    
public:
    int count = 0;
    Flota();
    ~Flota();
    void wyswietlListe();
    void znajdzPojazd();
    void zlicz();
    
    Pojazd& pobierzDane() {
        std::string nr;
        std::cout << "Podaj numer rejestracyjny: ";
        std::cin >> nr;
        for(int i = 0; i < 5; i++)
            if(nr == flota[i]->nr_rej) return *flota[i];
        std::cout << "BŁĄD: auto nie odnalezione!\n\n";
        return pobierzDane();
    };
};
#endif /* Flota_hpp */
