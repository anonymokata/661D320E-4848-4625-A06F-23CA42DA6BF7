
/* RomanNumeralCalculator.h */
/* Written by Michelle Lynn Pyle */
/* October 3 2016 */
/* this file contains header code for the Roman Numeral Calculator */
#include <math.h>
#include <time.h>
#ifndef RomanNumeralCalculator_H
#define RomanNumeralCalculator_H

#endif

#define MAXLEN 15
typedef struct RNString RNString;

struct RNString {
	char characters[MAXLEN];
};

typedef struct RNValues RNValues;

struct RNValues {
	int Values[MAXLEN];
};

/* constant variable for roman numeral characters */
static const char RNChars[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
static const char LowerRNChars[] = {'i', 'v', 'x', 'l', 'c', 'd', 'm'};

/* constant variable for roman numeral values */
static const int RNVals[] = {1, 5, 10, 50, 100, 500, 1000};

/* characters for ones place */
static const int OnesChars[] = {'I', 'V', 'X'};
static const int TensChars[] = {'X', 'L', 'C'};
static const int HundredsChars[] = {'C', 'D', 'M'};

/* global variables to hold Roman Numerals and Values 
static char InputRomanNumeral[12];
static int InputRomanNumeralValues[12];*/

/* function prototypes */
int SingleCharacterValue (char);
RNValues VectorOfCharacterValues (RNString);
int RomanNumeralArabicValue (RNValues);
int Calculator (int, int, char);
RNString BackToRomanNumeral (int);
RNString FullCalculator(RNString, RNString, char);



