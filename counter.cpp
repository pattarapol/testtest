#include "counter.h"
#include <iostream>
#include <fstream>

using namespace std;

Counter::Counter()
{
    x=0;
}
Counter::Counter(int X)
{
    if (X>=0){
        x=X;}
}
void Counter::Set(int X)
{
    if (X>=0){
        x=X;}
}
void Counter::Inc()
{
    x++;
}
void Counter::Dec()
{
    if (x>0){
        x--;}
}

void Counter::Print()
{
    cout<<x;
}

int Counter::Get()
{
    return x;
}
void Counter::Reset()
{
    x=0;
}
void Counter::Show (ostream &out)
{
    out<<x;
}
