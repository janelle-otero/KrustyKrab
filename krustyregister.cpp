#include <iostream>
using namespace std;

int main() {
    /* Name: Janelle Otero
Date: 9/8/2019
Section: COP3014-0001
Assignment: #1
Due Date: 9/10/2019
About this project: This project portrays a restaurant employee asking a customer what they would like to order. Then, it calculates the total of their order.
Assumptions: Assumes the customer is always putting in int and not making errors. The total will be different every time because the number of orders is randomized.

All work below was performed by Janelle Otero */

    const double PATTY = 3.50;  // price for krabby patty
    const double SHAKE = 1.00;  // price for kelp shake
    const double FRIES = 1.50;  // price for barnacle fries
    const double BITS = 2.00;   // price for coral bits

    cout << "\nWelcome to the Krusty Krab, Home of the Krabby Patty." << endl;  // greeting guest
    cout << "May I take your order?" << endl;

    // print menu and prices
    cout << "\nKrabby Patty: " << '$' << PATTY << endl;
    cout << "Kelp Shake: " << '$' << SHAKE << endl;
    cout << "Barnacle Fries: " << '$' << FRIES << endl;
    cout << "Coral Bits: " << '$' << BITS << endl;

    //initializing input variables
    int krabbyNum;
    int kaleNum;
    int barnacleNum;
    int coralNum;

    cout << "\nHow many krabby patties would you like? " << krabbyNum << endl;  // amount of patties
    //cin >> krabbyNum;

    cout << "How many kale shakes would you like? " << kaleNum << endl;       // amount of shakes
   //cin >> kaleNum;

    cout << "How many Barnackle Fries would you like? " << barnacleNum << endl;   // amount of fries
    //cin >> barnacleNum;

    cout << "How many Coral Bits would you like? " << coralNum << endl;        // amount of coral bits
    //cin >> coralNum;

    //calculation for total amount due and the taxes
    const double TOTAL = (krabbyNum * PATTY) + (kaleNum * SHAKE) + (barnacleNum * FRIES) + (coralNum * BITS);
    const int TAX = 0.055 * TOTAL;

    //calculate guest's amount due
    cout << "\nOrder Total (Before Undersea Tax): " << '$' << TOTAL << endl;
    cout << "Undersea Tax: " << '$' << TAX << endl;
    cout << "Final Order Total including Undersea Tax: " << '$' << TOTAL + TAX << endl;

    cout << "\nThanks for dining at the Krusty Krab!" << endl;

}