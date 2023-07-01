#include<iostream>
class Animal {
public: static int count;
    Animal() {
        Animal::count++;
    }
    virtual void movement() {
        std::cout << "I move " << std::endl;
    }
    virtual ~Animal() {
    }
};
int Animal::count = 0;

class Mammal :public Animal {
public: static int countM;
    Mammal() {
        Mammal::countM++;
    }
    void movement() override {
        std::cout << "I move by wallking " << std::endl;
    }
    ~Mammal() override {

    }
};
int Mammal::countM = 0;

class Fish : public Animal {
public:static int countF;
    Fish() {
    Fish::countF++;
    }
    void movement() override {
        std::cout << "I move by swimming " << std::endl;
    }
    ~Fish() override {
        {

        }
    }
};
int Fish::countF=0 ;

    class Bird :public Animal {
    public:static int countB;
        Bird() {
            Bird::countB++;
        }
        void movement() override {
            std::cout << "I move by flying " << std::endl;
        }
        ~Bird() override {

        }

    };
    int Bird::countB = 0;
    int main() {
        Animal* animal = new Animal;
        Animal* mammal = new Mammal;
        Animal* fish = new Fish;
        Animal* bird = new Bird;
        animal->movement();
        mammal->movement();
        fish->movement();
        bird->movement();
        int count = Animal::count;
        int countM = Mammal::count;
        int countF = Fish::count;
        int countB = Bird::count;
        std::cout << "Constructor calls for the Animal class: " << count << std::endl;
        std::cout << "Constructor calls for the Mammal class: " << countM << std::endl;
        std::cout << "Constructor calls for the Fish class: " << countF << std::endl;
        std::cout << "Constructor calls for the Bird class: " << countB << std::endl;
        delete animal;
        delete mammal;
        delete fish;
        delete bird;
        return 0;
    }