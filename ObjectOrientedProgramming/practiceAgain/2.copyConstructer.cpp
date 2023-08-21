#include <iostream>
using namespace std;
class Hero {
    //properties
    private:
    int health;
    public:
    char *name;
    char level;

    // static aaisa data member create karta hia jo class ko belong karta hai
    //access karne ke leye object bana'ne ki need nhi hai.

    static int timeToComplete;

    Hero() {
        cout << "Constructer called" << endl;
        name = new char[100];
    }

    //parametrised contructer
    Hero(int health) {
      this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }


    //copy constructer
    // copy constructer mein pass by value kabhi nhi karte hain 
    // only pass by refrence karte hain.
    //khud ki copy constructer ki implementation kar di tooh pahele se jo constructer hai wo haat jaye ga.


    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];

        strcpy(ch, temp.name);
        this -> name = ch;
        cout << "copy constructer called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout <<endl;
        cout << "[ Name: " << name << ", ";
        cout << "Level: " << level << ", ";
        cout << "Health: " << health << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int health) {
        this -> health = health;
    }

    void setLevel(char level) {
        level = level;
    }

    void setName(char name[]) {
        strcpy(this -> name, name);
    }

    static int random() {
        // static member ko hein access kar saqte hain
        return timeToComplete;
    }


    // Distructer
    ~Hero() {
        cout << "Destrucer called" << endl;
    }

};

int main() {
    cout << Hero::random() << endl;
}
/*
ye tha static datamember.
int Hero::timeToComplete = 5;

int main() {
    cout << Hero::timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;
}

*/

/*
    static function
    object create karne ki need nhi hai
    simply class ke madad se call kar payenge
    iiske pass this keyword nhi hota hai (this keyword pointer to current object hota hai | jab iisme object hota hein nhi hai tooh this keyword ka kya matlab).
*/

//default copy constructer shallow copy karta hai.
// There are two types of copy in copy constructer 
// 1. Deep copy. -> deep copy mein aalag memory banti hai.
// 2. Shallow copy. -> ek hein memory ko access karte hain.



// int main() {
// //     Hero suresh;
// //     suresh.setHealth(30);
// //     suresh.setLevel('c');

//     Hero suresh(10, 'd');
//     suresh.print();


//     //copy constructer call ho jata hai.
//     //copy constructer call hone se ye hota hai (niche wala line refer karen)
//     // suresh.health = R.health;
//     // suresh.level = R.level;
//     Hero R(suresh);
//     R.print();


//     return 0;
// }

// int main() {
//     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('d');
//     char name[6] = "vivek";
//     hero1.setName(name);
//     // hero1.print();


//     //Use default copy constructer.
//     // Both case copy constructer will be called.
//     Hero hero2(hero1);
//     // hero2.print();
//     // Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     //Copy Assignment Operator.
//     hero1 = hero2;

//     hero1.print();
//     hero2.print();
// }

//Distructer -> memory de-allocate karne ke leye kaam aata hai.
// iiska bhi same name hota hai class ka 
// iiska bhi koi return type nhi hota hai
// isme bhi koi input parameter nhi hote hain.
// int main() {


//     //static
//     Hero a; //static allocation mein distructer automatically call hota hai.




//     //Dynamic
//     Hero *b = new Hero(); // Dynamic allocation mein distructer call karna parta hai.
//     // iss case mein manually call karna parega distructer.

//     delete b;
// }

// constructer ek hein baar call hota hai jab uuske construction ka time hota hai 
// Distructer bhi ek hein baar call hota hai jab uusek deletion ka tym hota hai.


// HW 
// const keyword kya hota hai 
// object creation mein kaise use karte hain, function mein kaise use karte hain, initilisation mein kaise use karte hain, member datatype mein kaise use karte hain.


