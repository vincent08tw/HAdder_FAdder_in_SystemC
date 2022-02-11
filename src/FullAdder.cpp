/*****************************************************************************
[file name]--------------
FullAdder.cpp
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-12-27
[last edit]---
2021-12-27 
*****************************************************************************/ 
#include "FullAdder.h"

void FullAdder::fadder()
{
    S = (A ^ B) ^ Cin;
    Cout = (A & B) | ((A ^ B) & Cin);
}