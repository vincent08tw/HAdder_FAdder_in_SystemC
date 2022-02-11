/*****************************************************************************
[file name]--------------
HalfAdder.cpp
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-12-27
[last edit]---
2021-12-27 
*****************************************************************************/ 
#include "HalfAdder.h"

void HalfAdder::hadder()
{
    Sum = A ^ B;
    Carry = A & B;
}