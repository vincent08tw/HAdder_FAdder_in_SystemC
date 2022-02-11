/*****************************************************************************
[file name]--------------
HalfAdder.h
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-12-27
[last edit]---
2021-12-27 
*****************************************************************************/ 
#ifndef HALFADDER_H
#define HALFADDER_H

#include "systemc.h"

SC_MODULE(HalfAdder)
{
    // port definition
    sc_in <bool> A;
    sc_in <bool> B; 
    sc_out<bool> Sum;
    sc_out<bool> Carry;
    
    
    // data and function members
    //int count;
    void hadder();
    
    // constructor
    SC_CTOR(HalfAdder)
    {
        // sensitivity list
        SC_METHOD(hadder);
        sensitive << A;
        sensitive << B;
    }
    /*
    SC_CTOR(HalfAdder)
    {
        // sensitivity list
        SC_CTHREAD(runtimer, clock.pos());
        async_reset_signal_is(start, true);
    }
    */
    /*
    SC_CTOR(timer)
    {
        SC_THREAD(runtimer);
        // sensitivity list
        sensitive << clock.pos()
                  << start;
        count = 0;
    }
    */
};

#endif