#include "calc.hpp"
double calc(const Params& p, double x)
{
  return x * p.scale + p.offset;
}
