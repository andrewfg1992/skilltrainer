#include "genMath.hpp"

#include <iostream>
#include <sstream>
#include <stdlib.h>

genMath::genMath()
  : m_problem("")
  , m_solution("")
{
}

void genMath::generate()
{
  // Generate math prob and solution
  int a,b,c;
  a = rand() % 101;
  b = rand() % 101;
  c = a + b;
  std::ostringstream prob_text;
  prob_text << a << " + " << b << " = ?";
  m_problem = prob_text.str();
  std::ostringstream solu_text;
  solu_text << c;
  m_solution = solu_text.str();
}
