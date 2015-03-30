#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "BMI.h"

using namespace std;

int main()
{
   ifstream inFile ("file.in", ios::in);
   ofstream outFile ("file.out", ios::out);

   if (!outFile)
   {
	  cerr << "Fail to open the file." << endl;
	  exit(1);
   }

   double height;
   double weight;
   double BMIvalue;
   string cateName;

   BMI a;

   while (inFile >> height >> weight)
	  {
		 a.setHeight(height);
		 a.setWeight(weight);
		 height= a.getHeight();
		 weight= a.getWeight();
		 BMIvalue=a.calculateBMI();
		 cateName= a.category(BMIvalue);
		 
		 if (height==0 || weight==0)
		 {
			break;
		 }

		 outFile << BMIvalue << "\t" << cateName << endl;
		 
	  }
									    
   return 0;
}

