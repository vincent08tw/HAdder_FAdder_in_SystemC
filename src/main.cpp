/*****************************************************************************
[file name]--------------
main.cpp
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-12-27 
[last edit]---
2021-12-27 
*****************************************************************************/ 
#include "HalfAdder.h"
#include "FullAdder.h"

int sc_main(int argc, char* argv[])
{
    sc_signal<bool> A;
    sc_signal<bool> B;
    sc_signal<bool> Cin;
    
    sc_signal<bool> Sum;
    sc_signal<bool> Carry;
    sc_signal<bool> S;
    sc_signal<bool> Cout;
    
    sc_time clkPrd(10, SC_NS); // 100MHz
    sc_time clkDly( 0, SC_NS);
    // sc_clock(name, period, duty_cycle, start_time, pos_edge_first)
    sc_clock clock("clock", clkPrd);
    
    // HalfAdder instantiation
    HalfAdder ha1("Half-adder");
    ha1.A(A);
    ha1.B(B);
    ha1.Sum(Sum);
    ha1.Carry(Carry);
    // FullAdder instantiation
    FullAdder fa1("Full-adder");
    fa1.A(A);
    fa1.B(B);
    fa1.Cin(Cin);
    fa1.S(S);
    fa1.Cout(Cout);
    
    // tracing:
    // trace file creation, with VCD type output
    sc_trace_file *tf = sc_create_vcd_trace_file("RESULT");
    // External signals
    sc_trace(tf, clock, "Clock" );
    sc_trace(tf, ha1.A, "Half_adder_A");
    sc_trace(tf, ha1.B, "Half_adder_B");
    sc_trace(tf, ha1.Sum, "Half_adder_Sum");
    sc_trace(tf, ha1.Carry, "Half_adder_Carry");
    sc_trace(tf, fa1.A, "Full_adder_A");
    sc_trace(tf, fa1.B, "Full_adder_B");
    sc_trace(tf, fa1.Cin, "Full_adder_Cin");
    sc_trace(tf, fa1.S, "Full_adder_S");
    sc_trace(tf, fa1.Cout, "Full_adder_Cout");
    /*
    sc_trace(tf, clock, "clock" );
    sc_trace(tf, ha1.A, "Half-adder_A");
    sc_trace(tf, ha1.B, "Half-adder_B");
    sc_trace(tf, ha1.Sum, "Half-adder_Sum");
    sc_trace(tf, ha1.Carry, "Half-adder_Carry");
    sc_trace(tf, fa1.A, "Full-adder_A");
    sc_trace(tf, fa1.B, "Full-adder_B");
    sc_trace(tf, fa1.Cin, "Full-adder_Cin");
    sc_trace(tf, fa1.S, "Full-adder_S");
    sc_trace(tf, fa1.Cout, "Full-adder_Cout");
    */
    
    //reset the timer for 3 cycles before it is released for counting
    sc_start(0, SC_NS);
    A.write(0);
    B.write(0);
    Cin.write(0);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
    
    A.write(0);
    B.write(0);
    Cin.write(1);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
    
    A.write(0);
    B.write(1);
    Cin.write(0);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
    
    A.write(0);
    B.write(1);
    Cin.write(1);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
        
    A.write(1);
    B.write(0);
    Cin.write(0);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
        
    A.write(1);
    B.write(0);
    Cin.write(1);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
        
    A.write(1);
    B.write(1);
    Cin.write(0);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;
        
    A.write(1);
    B.write(1);
    Cin.write(1);
    sc_start(clkPrd); // for 1 cycle
    cout << "ha1.A : " << ha1.A << endl
         << "ha1.B : " << ha1.B << endl
         << "ha1.Sum : " << ha1.Sum << endl
         << "ha1.Carry : " << ha1.Carry << endl
         << "fa1.A : " << fa1.A << endl
         << "fa1.B : " << fa1.B << endl
         << "fa1.Cin : " << fa1.Cin << endl
         << "fa1.S : " << fa1.S << endl
         << "fa1.Cout : " << fa1.Cout << endl
         << endl;

    sc_close_vcd_trace_file(tf);
    
    return (0);
    
}