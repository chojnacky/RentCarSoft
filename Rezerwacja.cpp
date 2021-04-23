//
//  Rezerwacja.cpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 13/03/2021.
//

#include "Rezerwacja.hpp"

Rezerwacja::Rezerwacja(Pojazd& poj, int data_st, int data_ko, int godz): pojazd(poj), data_start(data_st), data_koniec(data_ko), godzina(godz){};

void Rezerwacja::wyswietl(){
    std::cout << "Pojazd: " << pojazd.nr_rej << std::endl;
    std::cout << "Start: " << data_start << " | " << godzina << std::endl;
    std::cout << "Koniec: " << data_koniec << " | " << godzina << std::endl << std::endl;
}
