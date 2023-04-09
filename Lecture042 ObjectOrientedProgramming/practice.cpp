// If there is no property in class then size is 1 byte
// READ padding of memory is done. --> int + char = sizeof() --> 5 but ans will be 8
// READ gready alignment.
// *this store the address of the object of the class.
// copy constructer is special*** waha pe hum pass by reference value pass karte hain nhi tooh loop mein faas jayega 
// read about copy constructer again
// 2 tarah ki copy hoti hai 
        // deep copy --> iisme same address pe ja ke nhi hota hai.
        // sallow copy --> default copy constructer. same hein address pe ja ke copy karta hai

// static Allocation ke leye Disturctor automatically call hota hai
// dynamic Allocation ke leye Distructor Manually call karna parta hai        
// constructor and distructor mein same hota hai
//      constructor ek hein baar call hota hai jab uuska creation ka time hota hai.
//      distructor ek hein baar call hota hai jab uuska deletion ka time hota hai.
// READ const keyword, -> object creation mein kaise use karte and const type ke fn() create kar saqte hain. member data type mein kaise use kar saqte hain
// READ initialization list.
//static key word --> data member hota hai jo belongs to class jaha pe object banane ki need nhi hoti.

// static functions --> object create karne ki need nhi hai. and iiske pass this key word nhi hota hai because (this keyword hota hai pointer to current object);
// but yaha tooh koi object hein nhi hai iss leye yaha par this keyword nhi hota hai.
#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    // jaise hein hum khud ki constructer ki implemention yaha likh dete hain default constructer haat jata hai aapne aap. 
    Hero() {
        cout << "constructer called." << endl;
        name = new char[100];
    }

    //parametrised constructer
    Hero (int health) {
        (*this).health = health;
        // this -> health = health;
    };

    Hero (int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    // copy constructer
    Hero (Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        cout << "copy constructer called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }


    

    Hero* print() {
        cout << endl;
        cout << "[ Name: " << this -> name << " ,";
        cout << "health: " << this -> health << " ,";
        cout << "level: " << this -> level << " ]" << endl;
        cout << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }   

    void setLevel(char l) {
        level = l;
    }

    void setName(char name[]) {
        strcpy(this -> name, name); 
    }

    ~Hero () {
        cout << "Destructor bhai called" << endl;
    }

    static int random() {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;
 
int main()
{

    cout << Hero::timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;



    // //static
    Hero a;


    // //dynamic
    Hero *b = new Hero();
    delete b;











    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructer.
    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'G';

    hero1.print();

    hero2.print();



    hero1 = hero2;



    Hero s(70, 'c');
    s.print();

    Hero r(s);
   r.print();
    






     
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);


    hero1.print();


    Hero suresh(20, 'c');
    suresh.print();

    //copy constructer.
    Hero R(suresh);
    R.print();















    cout << "hi " << endl;
    // statically
    Hero ramesh;
    ramesh.print();

    // Dynamically
    Hero *h = new Hero;
    h -> print();

    Hero temp(22, 'B');
    temp.print();











    Hero ramesh; // jab bhi object ko create karte hain ek chij call hoti hai constructer. --> object create hone ke time pe invoke hota hai.
    // statically allocation
    Hero a;
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl; 
    //dynamically

    //how we do in int
    // ek int ko heap mein allocate karte hain and jaha allocate karete hain uuska address store karwa lete hain pointer mein
    int *i = new int;
    Hero *h = new Hero; 
    cout << "level :" << (*h).level << endl;
    cout << "health :" << (*h).getHealth() << endl;

    cout << "level :" << h -> level << endl;
    cout << "health :" << h -> getHealth() << endl;


    // //creation of object
    // Hero ramesh;

    // cout << "ramesh health is : " << ramesh.getHealth() << endl;
    // ramesh.setHealth(70);
    // // ramesh.health = 10;
    // ramesh.level = 47;

    // cout << "size " << sizeof(ramesh) << endl;
    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "level is: " << ramesh.level << endl;
    // // return 0;
}