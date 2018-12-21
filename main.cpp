#include <iostream>
class CLASS{
private:
    int x;
    CLASS*y;
public:
    int getX() const {
        return x;
    }

    CLASS(int a) : x(a) {
        y = nullptr;
        std::cout << "Конструктор\n";
        std::cout << " X = " << x << "; адрес класса = " << y <<std::endl;

    }

    void push (int a) {
        CLASS z(a);
        y = &z;
        std::cout << "PUSH:\n";
        std::cout << " X = " << z.getX() << "; адрес класса = " << y <<std::endl;



    }

    ~CLASS() {

        std::cout << "Деструктор\n";


    }


};

int main() {
    int*a = new int;
    *a = 6;
    CLASS n(*a);
    int*b = new int;
    *b = 7;
    n.push(*b);

    return 0;
}