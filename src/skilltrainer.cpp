#include "interface.hpp"
#include "genMath.hpp"

#include <iostream>

int main()
{
  
  std::string choice("");
  bool quit = false;
  while(!quit)
  {
    std::cout << "Enter the number corresponding to what you want to train."
              << std::endl
              << "--------------------------------------------------------"
              << std::endl
              << "1. Math" << std::endl
              //  New menu entries go here
              << "   Enter 'q' to quit" << std::endl
              << "--------------------------------------------------------"
              << std::endl << std::endl;
    
    std::cin >> choice;
    std::cin.clear();
    std::cin.ignore(1024,'\n');
   
    while(choice.length() != 1)
    {
      std::cout << "Do not enter more than one character, please. Try again."
                << std::endl;
      std::cin >> choice;
      std::cin.clear();
      std::cin.ignore(1024, '\n');
    }

    char choice_char = choice.at(0);
    switch(choice_char)
    {
      case '1':
      {
        std::cout << "Math option selected" << std::endl;
        genMath math;
        genMath* math_ptr = &math;
        interface<genMath*> math_io(math_ptr);
        math_io.play();
        break;
      }

      case 'q':  // Ascii for 'q' -> quit
        std::cout << "Quiting SkillTrainer. Thanks for playing!" << std::endl;
        quit = true;
        break;

      default:
        std::cout << "Invalid menu input: " << choice << ". Try again." << std::endl;
        //std::string choice2("");
        //std::cin >> choice2;
        //std::cout << "next char: " << choice2 << std::endl;
        //return 0;
        break;
    }
  }
  return 0;
}
