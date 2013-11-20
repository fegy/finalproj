/*
 * header.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: ahmed
 */

#ifndef HEADER_HPP_
#define HEADER_HPP_
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class PhysicalTests {//base class
protected:
	//time_t timer;
	//struct tm current; // a structure for the time function
		//int currday;
		//double sec;
		//int year;
	//double sec;


	char gender;// patient gender type [m or f]
	int heartrate;
public:
	PhysicalTests (){
		 gender= NULL;
		  heartrate=0;
	};// constructor to initialize the variable to 0 for integers and null for chars
		/*void timerfun(){/////NEED TO FIX THIS

			 year = 2013;
			cout<<" enter the time in day"<<endl;
			cin>> currday;

			time (&timer);
			sec = difftime (timer, mktime (&current));
			cout <<"Today is"<< current<<" th of November,"<<year<<"-"<<sec<<endl;

		}*/

};
class urine: public PhysicalTests  {// 1st derived class

	double ph;  //acidity of the urine
 string 	Ketone; //metabolic product (negative)
 string 	Bilirubin;  //breakdown product of hemoglobin (negative)
 string 	Sugar; //glucose (negative)

public:
 urine( double ph, string 	Ketone,  string Bilirubin, string Sugar);
 void getinfo(); // a function that gets information from users and intializes the values of the variables
 void check_urine(){ // check the values and decide if they are normal or abnormal contidions

 };
 void annotation();//adding the doctor, nurse or the radiologist comments
 void printinfo_urine(); //print the patient info

};

class bloodpressure: public PhysicalTests  {
	int systolic ,diastolic;

public:
	void getinfo_press (); // gets info from user
	void check_press(); // check the condition
	void annotation_press (); //adding the doctor or nurse  comments
	 void printinfo_press(); //print the patient info

};

class temprature: public PhysicalTests  {
	int oraly;// from mouth
	int axillary; // emperatures taken by this route tend to be 0.3 to 0.4 degrees F lower than those temperatures taken by mouth
	int rectally; //Temperatures taken rectally (using a glass or digital thermometer) tend to be 0.5 to 0.7 degrees F higher than when taken by mouth
public:
	void getinfo_temp (); // gets info from user
	void check_temp(); // check the condition
	void annotation_temp (); //adding the doctor or nurse comments
	 void printinfo_temp(); //print the patient info
};


#endif /* HEADER_HPP_ */
