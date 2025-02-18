#ifndef TEXTAREA_H
#define TEXTAREA_H

#include "defs.h" 
#include "RGB.h" 
#include <string>
#include <iomanip>
#include <iostream>
 
class TextArea{
    public: 
        TextArea(); 
        TextArea(int x, int y, int width, int height,std:: string id, std::string label, RGB fill = RGB::WHITE() , RGB border = RGB::BLACK() ); 
        TextArea(Rectangle dim, std::string id, std::string label, RGB fill = RGB::WHITE() , RGB border = RGB::BLACK()); 
        void draw(Display *display, Window win, GC gc, int x, int y); 
        bool overlaps( const TextArea& ta)const; 
        void print()const; 
        TextArea(const TextArea& )  ;
        void setFill(RGB fill){
            this-> fill = fill; 

        } 
        void setBorder(RGB border){
            this-> border = border; 
        }
        bool equals(std:: string id){return this->id == id ; }
        std::string getId(){return id; }
    private:
        Rectangle dim; 
        std::string text; 
        std::string id; 
        RGB fill, border; 
}; 
#endif
