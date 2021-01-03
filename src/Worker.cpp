#include "Worker.h"


Worker::Worker(string &name, string &surame, double rate, int days) {
    this->name = name;
    this->surname = surame;
    this->rate = rate;
    this->days = days;
}

Worker::Worker(const Worker &w) {
    this->name = w.getName();
    this->surname = w.getSurname();
    this->rate = w.getRate();
    this->days = w.getDays();
}

Worker::Worker() {
    this->name = "John";
    this->surname = "Doe";
    this->rate = 100500;
    this->days = 20;
}

Worker::~Worker() {
    // noop
}

string Worker::getName() const {
    return name;
}

string Worker::getSurname() const {
    return surname;
}

double Worker::getRate() const {
    return rate;
}

int Worker::getDays() const {
    return days;
}

double Worker::getSalary() const {
    return this->days * this->rate;
}

