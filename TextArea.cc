#include "TextArea.h"
using namespace std; 
TextArea::TextArea(){
    // here I need to initialize the rectangle 
    dim.x = 0; 
    dim.y = 0; 
    dim.width =0; 
    dim.height = 0; 
    text =""; 
    id = ""; 
    fill = RGB::WHITE(); 
    border = RGB::BLACK(); 
}
TextArea::TextArea(int x, int y, int width, int height, string id, string label, RGB fill  , RGB border ){
    dim.x = x; 
    dim.y = y; 
    dim.width =width; 
    dim.height = height; 
    this->text =label; // check if label meant to be the text or not 
    this->id = id; 
    this->fill = fill; 
    this->border = border; 
}
TextArea::TextArea(Rectangle dim, string id, string label, RGB fill , RGB border){
    this-> dim = dim; 
    this->id = id; 
    this-> text = label; 
    this->fill = fill; 
    this->border = border; 

}
TextArea:: TextArea( const TextArea& ta){
    dim = ta.dim; 
    text = "DUPLICATE"; 
    id = ta.id; 
    fill = ta.fill; 
    border = ta.border;
}

// void TextArea::draw()
bool TextArea:: overlaps(const TextArea& ta)const{

    return dim.overlaps(ta.dim); 


}

void TextArea::print() const {
    cout<< setw(25) << left << "TextArea id:"<< right<< id<< endl; 
    cout<< setw(25)<< left<<"preferred location: "<< right << dim.x<<", "<<dim.y<< endl;
    cout<< setw(25)<< left<<"size:"<< right <<  dim.width<< ", "<< dim.height<< endl; 
    cout<< setw(25)<< left<< "Text:"<< right << text << endl;
}
