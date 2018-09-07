#include "interface.hpp"
#include "genMath.hpp"

#include <iostream>

template <class gen_ptr>
interface<gen_ptr>::interface(gen_ptr gp)
  : m_gen_ptr(gp)
  , m_continue(true)
{
}

template <class gen_ptr>
void interface<gen_ptr>::start()
{
  while(m_continue)
  {
    std::cout << "Starting interface." << std::endl;
    stop();
  }
}

template <class gen_ptr>
void interface<gen_ptr>::stop()
{
  std::cout << "Stoping interface." << std::endl;
  m_continue = false;
}

template <class gen_ptr>
void interface<gen_ptr>::getInput()
{

}

template <class gen_ptr>
bool interface<gen_ptr>::isCorrect()
{

}

template class interface<genMath*>;
