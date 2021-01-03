#ifndef FEODOROV_OOP_LW_2
#define FEODOROV_OOP_LW_2

#include <string>

using namespace std;

class Worker {
private:
    string name;
    string surname;
    double rate;
    int days;

public:
    string getName() const;
    string getSurname() const;
    double getRate() const;
    int getDays() const;
    double getSalary() const;


    // Default
    Worker();
    // Copy
    Worker(const Worker &w);
    // With first values
    Worker(string& name, string& surame, double rate, int days);

    ~Worker();
};


#endif //FEODOROV_OOP_LW_2
