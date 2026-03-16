#include "Player.h"

class Services {
    private:
        static const int size = 100;
        static Player **parr;
        static int count;
        static void storeData(const char* nm, int ag, const char* cn);
    public:
        static void storeData();
        static void acceptData();
        static void displayData();
        static void sortPlayer();
};