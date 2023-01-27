#include <iostream>
using namespace std;
 
void printArrayInt(int arr[], int size){
    
    cout << "Printing the Array " << endl;
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "printing DONE " << endl;
}
void printArrayChar(char arr[], int size){
    
    cout << "Printing the Array " << endl;
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "printing DONE " << endl;
}

int main()
{
    //declare
    int number[15];


    //accessing an array

    char ch[5]={'a','b','v','d'};

    printArrayChar(ch,5);



    cout << endl << "Everyting is fine" << endl;

    return 0;
}