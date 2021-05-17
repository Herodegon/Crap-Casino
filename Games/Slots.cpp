#include "Slots.h"

void SlotsRows::Spin() {
    //Get Number for Middle Symbol
    int randNum = rand() % NUM_SYMBOLS;
    
    //Get Symbol Above randNum
    int newTop = randNum - 1;
    if(newTop < 0) {newTop = NUM_SYMBOLS - 1;}
    
    //Get Symbol Below randNum
    int newBtm = randNum + 1;
    if(newBtm > NUM_SYMBOLS) {newTop = 0;}
    
    //Set Row Parts to New Symbols
    r_Top = static_cast<SlotsSymbols>(newTop);
    r_Mid = static_cast<SlotsSymbols>(randNum);
    r_Btm = static_cast<SlotsSymbols>(newBtm);
}
