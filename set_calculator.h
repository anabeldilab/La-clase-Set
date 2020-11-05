//objeto por set
typedef unsigned long ulong;

class Set {
  private:
    std::vector<ulong> set_;  // Set of longs
    ulong long_size_;  // Size of long in bits
    ulong limit_elements_size_; // Limit number of elements

  public:

    Set(void);
    Set(const ulong);

    ~Set();

    std::vector<ulong> get_set(void) const;
    ulong get_long_size_(void) const;
    ulong get_limit_elements_size_(void) const;

    void set_set(std::vector<ulong>);
    void set_limit_elements_size_(const ulong);

    void InsertElement(const ulong);
    void DeleteElement(const ulong);
    void SetClear(void);
    bool SetIsEmpty(void);
    bool ElementBelongsToSet(ulong);
    
    Set& operator=(std::initializer_list<ulong>);
    bool operator==(const Set&) const;
    

    void Write(void);

  private: 
    void CheckElement(ulong);
};

// ! set universal, sizeof(long)