#ifndef RGB_H
#define RGB_H
#include "defs.h"
#include <X11/Xlib.h>
class RGB{
    int r, g, b; // they are between 0 and 255
    public: 
        RGB(int Red, int green, int blue); 
        RGB(CuColour); // this will look at 24 least significant bit first 3 bytes 
        RGB(); 

        unsigned long getColour();
        
        static RGB WHITE() { return RGB(0xFFFFFF);}
        static RGB BLACK() {return  RGB(0x000000);} 
        static RGB RED() {return RGB(0xFF0000);} 
        static RGB GREEN(){return RGB(0x00FF00);}
        static RGB BLUE() {return RGB(0x0000FF);}
        void setColour (CuColour);
            /*This should generate the appropriate r, g, b values by reading the third, second, and first bytes (in least-significant order).
            */

        
        // you can add getter and setter 
        int getR()const{return r;}
        int getG()const {return g;}
        int getB()const{return b;}
        void setR(int ir){r = ir;}
        void setG(int ig){g = ig;}
        void setB(int ib){b = ib; }
}; 
#endif
