// This program determines the fee for a cat or dog pet tag. It makes use of
// nested if/else statements.
#include <iostream>
#include <string>
using namespace std;
int main()
{
string pet; // Either "cat" or "dog"
char spayed; // 'y' if the pet has been spayed/neutered, otherwise 'n'
// Ask the user to enter the type of pet (as a string) and then read the
// input storing it in variable 'pet'.
cout << "Enter the pet type (cat or dog): ";
cin >> pet;
// Ask the user if the pet has been spayed or neutered and store the input in
// variable 'spayed'.
cout << "Has the pet been spayed or neutered (y/n)? ";
cin >> spayed;
// Now we will determine the fee for the pet's tag based on this table:
//
// Type of Pet Spayed Tag Fee
// ----------- ------ -------
// Cat y $ 4.00
// Cat n $ 8.00
// Dog y $ 6.00
// Dog n $12.00
if (pet == "cat") {
if (spayed == 'y') cout << "Fee is $4.00 ";
else cout << "Fee is $8.00 ";
} else if (pet == "dog") {
if (spayed == 'y') cout << "Fee is $6.00 ";
else cout << "Fee is $12.00 ";
} else {
cout << "Only cats and dogs need pet tags. " << endl;
}
return 0;
}