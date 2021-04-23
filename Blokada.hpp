//
//  Blokada.hpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 21/04/2021.
//

#ifndef Blokada_hpp
#define Blokada_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Rezerwacja.hpp"

class Blokada: Rezerwacja {
    Rezerwacja rez;
    std::string opis;
    
public:
    Blokada(): rez(Rezerwacja()), opis("Blokada opis"){};
    Blokada(Rezerwacja& rez, std::string op): rez(rez), opis(op) {};
    ~Blokada(){
        std::cout << "Blokada usunięta\n";
    }
    void wyswietl(){
        std::cout << "Dane blokady:\n";
        rez.wyswietl();
        std::cout << "Opis: " << opis << std::endl;
    }
};

#endif /* Blokada_hpp */
