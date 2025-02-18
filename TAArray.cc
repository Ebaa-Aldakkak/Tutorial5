#include <iostream>

using namespace std; 
#include "TAArray.h"

TAArray::TAArray(){
    size = 0;
    Tarray = new TextArea*[MAX_COMPONENTS];
}

TAArray::~TAArray(){
    delete [] Tarray;
}

bool TAArray::add(TextArea* s){
    if (size >= MAX_COMPONENTS)return false;

    Tarray[size++] = s;  
    return true; 
    
}
bool TAArray::add(TextArea* s, int index){
    if (size >= MAX_COMPONENTS)return false;
    if( index < 0 ||index > size ) return false; 
    for(int i = size ; i > index; i--){
        Tarray[i] = Tarray[i-1]; 
    }
    Tarray[index] = s; 
    size ++; 
    return true; 
}


TextArea* TAArray::get(string id)const{
    for (int i = 0; i < size; ++i){
        if (Tarray[i]->equals(id)){
            return Tarray[i];
        }
    }
    return NULL;
}

TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= size) return NULL;
    return Tarray[index];
}

TextArea* TAArray::remove(string number){
    
    int index = 0;
    //we want to find the index of the element to remove
    while (!Tarray[index]->equals(number) && index < size){
        ++index;
    }

    return remove(index);

}

TextArea* TAArray::remove(int index){

    //did we fall off the end of the PanelArray?
    if (index<0 || index >=size) return nullptr;

    //we have found what we wanted to remove,
    //assign the output value
    TextArea *stu = Tarray[index];

    //copy everything after index left one position
    while (index < size - 1){
        Tarray[index] = Tarray[index + 1];
        ++index;
    }
    --size;
    return stu;

}


void TAArray::print() const 
{
  cout << endl << endl << "TextArea array: " << endl;
  for (int i=0; i<size; ++i)
    Tarray[i]->print();

  cout << endl;
}
