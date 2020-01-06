#ifndef GDT_H
#define GDT_H

#include "../../Definicje.h"


    class GDT
    {

        public:
        class Segmenty
        {
            private:
                uint16 limit_dolny;
                uint16 bazowy_dolny;
                uint8 bazowy_gorny;
                uint8 typ;
                uint8 limit_gorny_fl;
                uint8 bazowy;

            public: 
                Segmenty(uint32 bazowy, uint32 limit, uint8 typ)
                uint32 Bazowy();
                uint32 Limit();


        } __attribute__((packed));

    Segmenty puste_segmenty;
    Segmenty nieuzywane_segmenty;
    Segmenty segmenty_kodu;
    Segmenty segmenty_danych;

    public:
        GDT();
        ~GDT();

        uint16 Segmenty_Kodu();
        uint16 Segmenyt_danych();

    }; 

#endif

