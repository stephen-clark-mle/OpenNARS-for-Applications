#ifndef USEFULNESSVALUE_H
#define USEFULNESSVALUE_H

/////////////////////////////
//  YAN usefulness value //
/////////////////////////////

//References//
//-----------//
#include <stdio.h>

//Data structure//
//--------------//
typedef struct {
    //use_count, how often it was used in total
    long useCount;
    //age, how many cycles ago it was last used
    long lastUsed;
} Usage;

//Methods//
//-------//
//how useful it is in respect to the current moment
double Usage_usefulness(Usage usage, long currentTime);
//use the item
Usage Usage_use(Usage usage, long currentTime);
//print it
void Usage_Print(Usage *usage);

#endif
