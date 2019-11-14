#include <iostream>
#include <stdlib.h>

using namespace std;

int arrSize;

int input_ArrSize();
void input_Array(string[], string [], int[], int[], string[], string[]);
void display_Array(string [], string [], int[], int[], string[], string[]);

int main()
{
   string fname [5], lname [5], email [5], address [5];
   int age [5], contact[5];
   input_Array(fname, lname, age, contact, email, address);
   display_Array(fname, lname, age, contact, email, address);

    return 0;
}

int input_ArrSize (){

    cout << "Enter array size: ";
    cin >> arrSize;

    return arrSize;
}

void input_Array(string fname[], string lname[], int age [], int contact[], string email[], string address[]){

input_ArrSize();
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Firstname: " <<i+1<<" : ";
        cin >> fname [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Lastname: " <<i+1<<" : ";
        cin >> lname [i];
    }
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter age: " <<i+1<<" : ";
        cin >> age [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter contact number: " <<i+1<<" : ";
        cin >> contact [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter email: " <<i+1<<" : ";
        cin >> email[i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter address: " <<i+1<<" : ";
        cin >> address[i];
    }
}

void display_Array(string fname[], string lname [], int age[], int contact[], string email[], string address[]){

system ("CLS");
    cout << "| Firstname | Lastname | Age | Contacts | Email | Address"<< endl;
    for (int i= 0; i<=arrSize-1; i++) {
    cout << "\n  " << fname [i]<< "       |    " << lname[i] << "       |    " << age[i] << "       |    " << contact[i] << "       |    " << email[i]<< "       |    " << address[i] <<endl;

    }
 }
