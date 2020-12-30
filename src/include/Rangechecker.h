#ifndef FEODOROV_OOP_LW_1_RANGECHECKER_H
#define FEODOROV_OOP_LW_1_RANGECHECKER_H


class Rangechecker {
private:
    double l;
    double r;
public:
    // Rangechecker(double left, double right);
    void setLeft(double left);
    void setRight(double right);
    bool rangecheck(double num) const;
};


#endif //FEODOROV_OOP_LW_1_RANGECHECKER_H
