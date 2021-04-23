//
//  main.cpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 04/03/2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Pojazd.hpp"
#include "Flota.hpp"
#include "Rezerwacja.hpp"
#include "Wynajem.hpp"
#include "Blokada.hpp"

int main(int argc, const char * argv[]) {
    srand( static_cast<unsigned int>(time(nullptr)));
    Flota listaPojazdow = Flota();
    listaPojazdow.wyswietlListe();
//    Rezerwacja nowa = Rezerwacja(listaPojazdow.pobierzDane(), 21042021, 25042021, 15);
//    Wynajem wynaj = Wynajem(nowa, "Karol", "Chojnacki", "rezerwacja111", Stan::Nowa, 1234, 150);
//    wynaj.wyswietl();
    
//    Blokada blok = Blokada(nowa, "Auto zablokowane");
//    blok.wyswietl();
    
//    listaPojazdow.znajdzPojazd();

    return 0;
}
