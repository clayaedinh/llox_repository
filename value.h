#ifndef clox_value_h
#define clox_value_h

#include "common.h"

typedef double Value;

//if possible, use macros to imitate generics for dynamic arrays

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif