#ifndef TAARRAY_H
#define TAARRAY_H

// #define MAX_ARR 64

#include "TextArea.h"

class TAArray
{
  public:
    TAArray();
    ~TAArray();

    bool add(TextArea*);
    bool add(TextArea*, int index); 
    TextArea* get(std::string name)const ;
    TextArea* get(int index)const;

    TextArea* remove(std::string name);
    TextArea* remove(int index);


    bool isFull(){return size == MAX_COMPONENTS;}
    int getSize(){return size;}
    void print()const;
    

  private:
    TextArea** Tarray;
    int size;
   
};

#endif
