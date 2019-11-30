#ifndef H_SCALARENCODER
#define H_SCALARENCODER

//////////////////////////////
//  Scalar and term encoder //
//////////////////////////////
//Supports to encode a value in HTM way:
//https://www.youtube.com/watch?v=V3Yqtpytif0&list=PL3yXMgtrZmDqhsFQzwUC9V8MeeVOQ7eZ9&index=6

//References//
//-----------//
#include <string.h>
#include <math.h>
#include "Term.h"
#include "Globals.h"

//Parameters//
//----------//
#define TERMS_MAX 255
#define TERMS_LEN 255
#define TERM_ONES 5
#define NARSESE_LEN_MAX 1000
#define ATOMIC_TERM_LEN_MAX 30

//Data structure//
//--------------//
//Atomic terms:
Atom atoms[TERMS_MAX][ATOMIC_TERM_LEN_MAX];

//Methods//
//-------//
//Initializes encoder
void Encode_INIT();
//Convert Narsese to expanded minimal Narsese
char* Encode_Expand(char *narsese);
//Tokenize minimal Narsese in prefix copula order
char** Encode_PrefixTransform(char* narsese_expanded);
//Parses a Narsese string to a compound term
Term Encode_Term(char *narsese);
//Parses an atomic term string to a term
Term Encode_AtomicTerm(char *name);
//Print a term
void Encode_PrintTerm(Term *term);
#endif
