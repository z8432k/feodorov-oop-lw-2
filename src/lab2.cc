#include <iostream>
#include <string>
#include <Worker.h>

using namespace std;

int main(int argc, char** argv) {
    cout << "Lab 2" << endl << endl;

    auto worker1 = new Worker();
    Worker worker2(*worker1);

    string name = "Vasiliy";
    string surname = "Pupkin";
    auto *worker3 = new Worker(name, surname, 10.0, 30);

    cout << "Worker 1 [ at " << hex << worker1 << "] salary: " << worker1->getName() << " " << worker1->getSalary() << endl;
    cout << "Worker 2 [ at " << hex << &worker2 << "] salary: " << worker2.getName() << " " << worker2.getSalary() << endl;
    cout << "Worker 3 [ at " << hex << worker3 << "] salary: " << worker3->getName() << " " << worker3->getSalary() << endl;

    exit(EXIT_SUCCESS);
}
