//
//  Wynajem.hpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 21/04/2021.
//

#ifndef Wynajem_hpp
#define Wynajem_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Rezerwacja.hpp"

enum Stan {
    Nowa,
    Wydany,
    Zwrocony,
    Zarezerwowany,
    Anulowany
};

inline const char* ToString(Stan x){
    switch (x){
        case Stan::Nowa:    return "Nowa";
        case Stan::Wydany:    return "Wydany";
        case Stan::Zwrocony:    return "Zwrócony";
        case Stan::Zarezerwowany:    return "Zarezerwowany";
        case Stan::Anulowany:    return "Anulowany";
        default:      return "[Nieznany Stan Rezerwacji]";
    }
}

class Wynajem: Rezerwacja {
    Rezerwacja rez;
    std::string imie;
    std::string nazwisko;
    std::string nr_rezerwacji;
    Stan stan;
    int telefon;
    int stawka;
public:
    Wynajem(): rez(Rezerwacja()), imie("Def"), nazwisko("Nazw"), nr_rezerwacji("111"), stan(Stan::Nowa), telefon(000), stawka(100){
    };
    Wynajem(Rezerwacja& rez, std::string im, std::string nazw, std::string nr_rez, Stan st, int tel, int staw): rez(rez), imie(im), nazwisko(nazw), nr_rezerwacji(nr_rez), stan(st), telefon(tel), stawka(staw) {
    };
    ~Wynajem() {
        std::cout << "Wynajem " << nr_rezerwacji << " usunięty\n";
    }
    
    void wyswietl(){
        std::cout << "Dane rezerwacji: \n";
        rez.wyswietl();
        std::cout << "Imie: " << imie << std::endl;
        std::cout << "Nazwisko: " << nazwisko << std::endl;
        std::cout << "Nr rezerwacji: " << nr_rezerwacji << std::endl;
        std::cout << "Stan: " << ToString(stan) << std::endl;
        std::cout << "Telefon: " << telefon << std::endl;
        std::cout << "Stawka: " << stawka << std::endl;
    }
};


#endif /* Wynajem_hpp */
