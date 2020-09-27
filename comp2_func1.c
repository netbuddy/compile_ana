#include <stdio.h>

extern void comp1_func2(void);

void comp2_func1(void)
{
    comp1_func2();
}
