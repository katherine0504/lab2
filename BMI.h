#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_h
#define BMI_h

class BMI
{
        public:
	    
		//Default Constructor
	    BMI();
						              
	    //Overload Constructor
	    BMI(double, double); 
									               
	    //Destructor
	    //~BMI(); 
												                
	    //Accessor Functions
	    double getHeight();
	   	 // getHeight- returns height of patient
										                 
	    double getWeight();
		 // getWeight- returns weight of patient
		                   
		//Mutator Functions
		void setHeight(double);
		 //setHeight- sets height of patient
																						                    
		void setWeight(double);
		 //setWeight- sets weight of patient

		double calculateBMI();
		 //calculateBMI- calculates BMI values
		

		string category(double);
												             
	    private:
        double newHeight;
        double newWeight;
		double BMIvalue;
		string cateName;
     
										                     
														      
};
      

#endif
