//
//  Rezerwacja.hpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 13/03/2021.
//

#ifndef Rezerwacja_hpp
#define Rezerwacja_hpp

#include <stdio.h>
#include "Pojazd.hpp"
#include <string>
#include <iostream>

class Rezerwacja {
public:
    Pojazd pojazd;
    int data_start;
    int data_koniec;
    int godzina;
    
    Rezerwacja(): pojazd(Pojazd()), data_start(0), data_koniec(0), godzina(0){};
    Rezerwacja(Pojazd& poj, int data_st, int data_ko, int godz);
    void wyswietl();
};
#endif /* Rezerwacja_hpp */
