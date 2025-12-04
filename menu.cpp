/* Name: (Eliallah Dadzie)
Date: (01/24/2023)

All work below was performed by (Eliallah Dadzie) */


#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    //Price of each item
     const double BertieBotts = 4.00;
     const double Frogs = 1.50;
     const double Bonbons = 2.50;
     const double Cauldrons = 6.25;
     const double WizardTax = 0.065;
     
     //Quantity
     int BertieBottsquan;
     int Frogsquan;
     int Bonbonsquan;
     int Cauldronsquan;
     
     //Total Cost of Each Item
     double BertieBottsCost;
     double FrogsCost;
     double BonbonsCost;
     double CauldronsCost;
    
    
     //Cout Statements for Menu
     cout << "Anything off the trolley, dears?" << endl;
     cout << "\n TROLLEY MENU" << endl;
     cout << " ----------------" << endl;
     cout << " Bertie Bott's Every Flavor Beans: $"<< BertieBotts << endl;
     cout << " Chocolate Frog: $" << Frogs << endl;
     cout << " Exploding Bonbons: $" << Bonbons << endl;
     cout << " Cauldron Cakes: $" << Cauldrons << endl;
     cout << " -----------------" << endl;
     
      // User Input & Cost of Items
     cout << "How many Bertie Bott's Every Flavour Beans?" << endl;
     cin >> BertieBottsquan;
     BertieBottsCost = BertieBottsquan * BertieBotts; 
     
     cout << "How many Chocolate Frogs?" << endl;
     cin >> Frogsquan;
     FrogsCost = Frogsquan * Frogs;
     
     cout << "How many Exploding Bonbons" << endl;
     cin >> Bonbonsquan;
     BonbonsCost = Bonbonsquan * Bonbons;
     
     cout << "How many Cauldron Cakes?" << endl;
     cin >> Cauldronsquan;
     CauldronsCost = Cauldronsquan * Cauldrons;
     
     //Calculation 
     double Total = BertieBottsCost + BonbonsCost + FrogsCost + CauldronsCost;
     double TotalWithTax = Total * WizardTax;
     double TotalAfterTax = Total + TotalWithTax;
     
     
    //for 2 decimal place
     cout << fixed << showpoint << setprecision (2);
     
     //Cout statements for Printing Total Cost
     cout << "\nTotal (Before Wizard Tax): $" << Total << endl;
     cout << "Tax (6.50%): $" << TotalWithTax << endl;
     cout << "Total (Wizard Tax): $" << TotalAfterTax << endl;
     cout << "\nEnjoy your candies!" << endl;
     
     
}




