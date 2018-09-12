template <class gen_ptr>
class interface
{
  public:

  // Constructor
  interface(gen_ptr gp);

  // Starts starts user I/O for game. User input can break loop
  void play();

  private:

  // Member variables
  gen_ptr m_gen_ptr;  // Pointer to generator obj
};
