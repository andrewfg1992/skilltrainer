#include <string>

class genMath
{
  public:

  // Constructor
  genMath();

  // Generates new problem and corresponding solution
  void generate();

  // Member variables
  std::string m_problem;   // Holds latest problem
  std::string m_solution;  // Holds latest solution
};
