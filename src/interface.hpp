template <class gen_ptr>
class interface
{
  public:

  // Constructor
  interface(gen_ptr gp);

  // Starts interface for problem and solution I/O
  void start();

  // Stops interface loop
  void stop();
  
  // Member variables
  bool m_continue;     // Stops I/O interface if false

  private:

  // Get user input
  void getInput();

  // Evaluate user input against known solution
  // Returns true if answer is correct, false otherwise
  bool isCorrect();

  // Member variables
  void* m_gen_ptr;  // Pointer to generator obj
};
