/*****************************************************************************
[file name]--------------
FullAdder.h
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-12-27
[last edit]---
2021-12-27 
*****************************************************************************/ 
#ifndef FULLADDER_H
#define FULLADDER_H

#include "systemc.h"

SC_MODULE(FullAdder)
{
    // port definition
    sc_in <bool> A;
    sc_in <bool> B; 
    sc_in <bool> Cin;   
    sc_out<bool> S;
    sc_out<bool> Cout;
    
    
    // data and function members
    //int count;
    void fadder();
    
    // constructor
    SC_CTOR(FullAdder)
    {
        // sensitivity list
        SC_METHOD(fadder);
        sensitive << A;
        sensitive << B;
        sensitive << Cin;
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