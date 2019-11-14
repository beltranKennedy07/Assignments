#include <iostream>

using namespace std;

string password, choice;
double total, price;
int points=0, items, quantity, cash, preferredItems, filledItems;
int tries = 3, trials = 0;

int wearablePoints = 10;
int phonePoints = 30;
int tabletsPoints = 40;
int cameraPoints = 60;

void getPassword();
void getDisplayMenu();
void getTotalPoints();
int main ()
{
getPassword();
getDisplayMenu();
getTotalPoints();

return 0;
}
void getPassword()
{
  cout << "Please Enter your password: ";
cin >> password;
if(password == "123")
{
cout<<"Welcome user! \n";
}
}
void getDisplayMenu()
{
cout<<"Buy more stuff to gain points and earn rewards\n ";
cout<<"[1]Wearable\t [2]Phones\t [3]Tablets\t [4]Camera \n";

cout<< "Please select an item: ";
cin>>items;
cout<< "quantity: ";
cin>>quantity;

points = items*quantity;
}
void getTotalPoints ()
{
cout<< "Enter the Item  price: ";
cin >> price;
cout<< "Enter the Item  quantity: ";
cin>>quantity;

total=quantity*price;

cout<< "The total price is " << total << endl;
cout<< "Select Items\n ";
cout<< "[1]Wearable\t [2]Phones\t [3]Tablets\t [4]Camera \n";
cin>>preferredItems;

switch(preferredItems)
{
case 1:
cout<< "Enter Amount: ";
cin>>cash;
filledItems = cash/wearablePoints;

points = cash/100;
cout << "The equivalent amount of the Items filled is : " << " filledItems" << endl;
cout << "Earned Points " << points;
break;
case 2:
cout<< "Enter Amount: ";
cin>>cash;
filledItems = cash/phonePoints;

points = cash/100;
cout << "The equivalent amount of the Items filled is : " << " filledItems " << endl;
cout << "Earned Points " << points;
break;
case 3:
cout<< "Enter Amount: ";
cin>>cash;
filledItems = cash/tabletsPoints;

points = cash/100;
cout << "The equivalent amount of the Items filled is : " << " filledItems" << endl;
cout << "Earned Points " << points;
break;
case 4:
cout<< "Enter Amount: ";
cin>>cash;
filledItems = cash/cameraPoints;

points = cash/100;
cout << "The equivalent amount of the Items filled is : " << " filledItems" << endl;
cout << "Earned Points " << points;
break;

while(trials != 3)
{
cout << "Try again? Y or N: ";
choice;
if(choice == "Y" || "y")
{
trials++;
if(trials==1)
{
cout << "You only have " << tries - trials << " trials remaining\n";
}
if(trials==2)
{
cout << "You only have " << tries - trials << " trials remaining\n";
}
if(trials==3)
{
cout << "You have exceeded the number of trials, try again later \n";
}

}
else{
}
}

}
}
