#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:  // ONLY ACCESSIBLE INSIDE THIS CLASS
    string name; 
    double height;
    double weight;

    // static value is going to share the same value for all objects of an animal class
    // if the value changes, it changes for every single value
    static int numOfAnimals;

    public:
    string GetName(){return name;}
    void SetName(string name){this->name = name;}

    double GetHeight(){return height;}
    void SetHeight(double height){this->height = height;}

    double GetWeight(){return weight;}
    void SetWeight(double weight){this->weight = weight;}

    void SetAll(string, double, double);
    
    //Constructor
    Animal(string, double, double);

    //no attributes are passed
    Animal(); // Overloaded Constructor

    // Destructor
    ~Animal(); 

    static int GetNumOfAnimals(){return numOfAnimals;}

    void ToString();
};

int Animal::numOfAnimals = 0;
void Animal::SetAll(string name, double height, double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;

    Animal::numOfAnimals++;
}

//Constructor
Animal:: Animal(string name,double height,double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}
//No attributes are passed
Animal::Animal(){
    this->name = "No Name";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

//Destructor
Animal::~Animal(){
    cout<<"Animal "<<this->name<<" destroyed"<<endl;
}

void Animal::ToString(){
    cout<<this->name<< " is "<<this->height<<"cms in height, "<<this->weight<<"kgs in weight"<<endl;
}
class Dog: public Animal{
    private:
    string sound = "Wooof";

    public:
    void MakeSound(){
        cout<<"The Dog "<< this->GetName()<<" says "<<this->sound<<endl;
    }

    Dog(string, double, double, string);
    Dog(): Animal(){};

    void ToString();
};

Dog::Dog(string name, double height, double weight, string sound):
    Animal(name,height,weight){this->sound = sound;}

void Dog::ToString(){
    cout<<this->GetName()<<" is "<<this->GetHeight()<<" cms tall and "<<this->GetWeight()<<" kgs in weight and says "<<this->sound<<endl;
}
int main(){
    Animal fred;
    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("tiger");
    fred.ToString();

    Animal animals("Lion", 30,50);
    animals.ToString();

    Dog spot("Spot", 40, 20, "Woof");
    spot.ToString();

    return 0;
}