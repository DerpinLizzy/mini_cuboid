#include "IIR_filter.h"


// constructors
IIR_filter::IIR_filter(float tau,float Ts)
{
    // y_last = 0;
}

IIR_filter::IIR_filter(float tau,float Ts,float K)
{
    b0 = K *  Ts / tau;
    a0 = Ts / tau - 1;
    yk = 0;

}

// Methods:

float IIR_filter::eval(float u)
{
    float y = b0 * u -a0 * yk;
    yk = y; 

    return y;       // this has to be modified!!!
}


// Deconstructor
IIR_filter::~IIR_filter() {} 