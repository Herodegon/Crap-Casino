#include <iostream>
#include <string>
#include <vector>

enum SlotsSymbols {
    BELL,                           
    CHERRY, GRAPE, LEMON, MELON,
    BAR, SEVEN,
    SPIN
};

struct SlotsRows {
    
    ///Spin Slot Row
    void Spin();
    
    SlotsSymbols top;
    SlotsSymbols mid;
    SlotsSymbols btm;
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
