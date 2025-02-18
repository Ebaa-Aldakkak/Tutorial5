#include "RGB.h"
using namespace std; 

RGB::RGB(int Red, int green, int blue){
    r = Red; 
    g = green; 
    b= blue;
    if(r <0) r= 0; 
    if(g<0) g= 0; 
    if(b<0) b= 0; 
}
// need to ensure that the colours are between 0 and 255
    
        // I am assuming that if either is greater than 255 will assign it as 255
    
RGB::RGB(unsigned long iCuColour){
    setColour(iCuColour); 
}
RGB::RGB(){
    r = g = b = 0; 
}

/// this should get the Cucolour from r , b and g 
unsigned long RGB:: getColour(){  
    return (((unsigned long)r<< 16)|((unsigned long)g<<8)|(unsigned long)b  ); 
}
void RGB::setColour(CuColour iCuColour){
    unsigned long n = 0xFF; 
    this ->r = (iCuColour>>16) & n;
    this-> g = (iCuColour>> 8) & n; 
    this-> b = ( iCuColour & n );


}
