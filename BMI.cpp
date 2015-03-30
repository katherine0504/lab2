#include "BMI.h"

BMI::BMI()
{
             newHeight=0;
             newWeight=0.0;  
}

BMI::BMI(double height, double weight)
{
                   newHeight= height;
                   newWeight= weight;
}


void BMI::setHeight(double height)
{
	   newHeight= height;
}

 void BMI::setWeight(double weight)
{
       newWeight= weight;
}

double BMI::getHeight()
{
       return newHeight;
}

double BMI::getWeight()
{
       return newWeight;
}

double BMI::calculateBMI()
{
   BMIvalue= ((newWeight)/((newHeight/100)*(newHeight/100)));
   return BMIvalue;
}

string BMI::category(double BMIvalue)
{
   if (BMIvalue < 15)
   {
	  cateName ="Very severely underweight";
   }

   else if (BMIvalue>=15 && BMIvalue<16)
   {
	  cateName ="Severely underweight";
   }

   else if (BMIvalue>=16 && BMIvalue<18.5)
   {
	  cateName ="Underweight";
   }

   else if (BMIvalue>=18.5 && BMIvalue<25)
   {
	  cateName= "Normal";
   }

   else if (BMIvalue>=25 && BMIvalue<30)
   {
	  cateName= "Overweight";
   }

   else if (BMIvalue>=30 && BMIvalue<35)
   {
	  cateName= "Obese class I(Moderately obese)";
   }

   else if (BMIvalue>=35 && BMIvalue<40)
   {
	  cateName= "Obese class II(Severely obese)";
   }

   else if (BMIvalue>=40)
   {
	  cateName= "Obese class III(Very severely obese)";
   }

   
   return cateName;
}

