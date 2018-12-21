#include <iostream>
class CLASS{
private:
    int x;
    CLASS*y;
public:

    int getX() const {
        return x;
    }

    CLASS* getY() const {
        return y;
    }

    CLASS(int a) : x(a) {
        y = nullptr;
        std::cout << "Конструктор\n";
        std::cout << " X = " << x << "; адрес класса = " << y <<std::endl;

    }

    CLASS* push (int a) {
        CLASS*z = new CLASS(a);
        y = z;
        std::cout << "PUSH:\n";
        std::cout << " X = " << z->getX() << "; адрес класса = " << y <<std::endl;
        return z;



    }

    ~CLASS() {
        delete y;

        std::cout << "Деструктор\n";


    }


};

int main() {
    int a = 6;
    CLASS*n = new CLASS(a);
    int b = 7;
    n->push(b);
    //n->getY().push(8);
    n->getY();
    std::cout << n->getY() <<std::endl;
    *n->getY()->push(8);
    delete n;
    //.n.getY();

    return 0;
}