#include "interface.hpp"
#include "genMath.hpp"

#include <iostream>

template <class gen_ptr>
interface<gen_ptr>::interface(gen_ptr gp)
  : m_gen_ptr(gp)
{
}

template <class gen_ptr>
void interface<gen_ptr>::play()
{ 
  std::string user_input("");
  std::cout << "Starting interface. Enter \"menu\" to return to the menu" << std::endl;
  
  while(true)
  {
    m_gen_ptr->generate();
    std::cout << (m_gen_ptr->m_problem) << std::endl;
    user_input.clear();
    std::cin >> user_input;
    if(user_input.compare("menu")==0)
      break;
    if(user_input.compare(m_gen_ptr->m_solution)==0)
      std::cout << "Correct!" << std::endl;
    else
      std::cout << "Incorrect" << std::endl;
  }
  std::cout << "Closing interface. Returning to menu." << std::endl;

}

template class interface<genMath*>;
