#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

enum SlotsSymbols {
    BELL,                           
    CHERRY, GRAPE, LEMON, MELON,
    BAR, SEVEN,
    SPIN,
    NUM_SYMBOLS
};

struct SlotsRows {
    
    ///Spin Slot Row
    void Spin();
    
    SlotsSymbols r_Top;
    SlotsSymbols r_Mid;
    SlotsSymbols r_Btm;
};

///Need 10 Coins to Play
class Slots {
    public:
        Slots() {rows.resize(3);}
        
        ///Run Game
        void Game_Slots();
        
    private:
        
        ///Slot Interface
        std::string P_Menu();
        std::string P_Results();
        
        ///Slot Rows
        std::vector<SlotsRows> rows;
};
