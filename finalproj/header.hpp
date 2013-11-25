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
		int currday;
		int month;
		int year;
        int hour;
        int min;


	char gender;// patient gender type [m or f]
	string name;
	int id;
public:
	PhysicalTests (const char gender, string name);// constructor to initialize the variable to 0 for integers and null for chars
		void timerfun(){/////NEED TO FIX THIS

			 year = 2013;
			cout<<" enter the  day"<<endl;
			cin>> currday;
			cout<<" enter the month"<<endl;
				cin>> month;
cout <<" Enter the hour"<<endl;
cin >>hour;
cout <<" Enter the minutes"<<endl;
cin >>min;
		}

		void GETINFO(){

			cout<<"Name of Doctor/ Nurse :"<<endl;
			cin>>name;
			cout <<"ID number:"<<endl;
			cin>> id;
			cout<<" Patient Gender (F/M):"<<endl;
						cin >>gender;
		}

};
class urine: public PhysicalTests  {// 1st derived class

	double ph;  //acidity of the urine
	double protein;
 double	Ketone; //metabolic product (negative)
 double 	Bilirubin;  //breakdown product of hemoglobin (negative)
 double	Sugar; //glucose (negative)
 double Crystals; //are found if there are high concentrations of certain substances in the urineI(negtive)

public:
 urine( double ph, string 	Ketone,  string Bilirubin, string Sugar);

 void getinfo(){// a function that gets information from users and intializes the values of the variables
	 cout<<"ph value:"<<endl;
	 cin>>ph;
	 cout<<"protein value"<<endl;
	 	 cin>>protein;
	 cout<<"Bilirubin value"<<endl;
	 cin>>Bilirubin;
	 cout<<"Sugar value"<<endl;
	 cin>>Sugar;
	 cout<<" Crystals value"<<endl;
	 cin>> Crystals;

 };
 void check_urine(){ // check the values and decide if they are normal or abnormal contidions
if ((ph> 7)| (ph<5)){
	cout<< "Abnormal acidity of the urine "<<endl;}
 else if ((ph<= 7)|(ph>=5)){
	cout<< "Normal acidity of the urine "<<endl;
}
	if (protein > 100){
		cout<<"(protein is Negative) : Abnormal protien content !"<<endl;}
	else if(protein >= 100 ) {
			cout<<"(protein is Positive) : Normal protien content !"<<endl;}
	if (Bilirubin> 150){
			cout<<"(Bilirubin is Negative) : Abnormal Bilirubin content !"<<endl;}
		else if(Bilirubin >= 150 ) {
				cout<<"(Bilirubin is Positive) : Normal Bilirubin content !"<<endl;}
	if (Sugar> 300){
				cout<<"(Sugar is Negative) : Abnormal Sugar content !"<<endl;}
			else if(Sugar >= 300 ) {
					cout<<"(Sugar is Positive) : Normal Sugar incontent !"<<endl;}
	if (Crystals> 50){
					cout<<"(Crystals is Negative) : Abnormal Crystals content !"<<endl;}
				else if(Crystals >= 50 ) {
						cout<<"(Crystals is Positive) : Normal Crystals incontent !"<<endl;}
	};


 void annotation();//adding the doctor, nurse or the radiologist comments
 void printinfo_urine(); //print the patient info

};

class bloodpressure: public PhysicalTests  {
double systolic ,diastolic;

public:
bloodpressure(double systolic , double diastolic );
	void getinfo_press ()// gets info from user
	{
		cout<<"Systolic pressure:"<<endl;
		cin>>systolic;
		cout<<"Diastolic pressure:"<<endl;
				cin>>diastolic;
	};

	void check_press()// check the condition
	{

		if ( (systolic >= 140)| (diastolic >= 90 )){
			cout <<"High Blood Pressure"<<endl;
		}

		else if (((systolic <=139)& (systolic >=120)) | ((diastolic <=89)& (diastolic >=80)) )
		{
			cout<<"prehypertension"<<endl;
		}

		else if ( (systolic <= 120)| (diastolic <= 80 )){
					cout <<"Normal blood pressure "<<endl;
				};
	}



	void annotation_press (); //adding the doctor or nurse  comments
	 void printinfo_press(); //print the patient info

};

class temprature: public PhysicalTests  {
	double c_oraly, f_oraly;// from mouth
	double c_axillary,f_axillary; // temperatures taken by this route tend to be 0.3 to 0.4 degrees F lower than those temperatures taken by mouth
	int choice;
	int type;

public:

	temprature( double c_oraly,  double f_oraly, double c_axillary, double f_axillary, int choice, int type );
	void getinfo_temp (){ // gets info from user



		cout <<"1-Celsius \n 2-Fahrenheit"<<endl;
			cin >> choice;
			if (choice==1){

				cout<<"1- Oraly \n 2- Axillary"<<endl;
				cin>>type;
			if (type ==1){
				cout<<"Temprature :"<<endl;
								cin>>c_oraly;}

			else { cout<<"Temprature :"<<endl;
			cin>>c_axillary; }
			}


			else if (choice==2){
				cout<<"1- Oraly \n 2- Axillary"<<endl;
								cin>>type;
							if (type ==1){
								cout<<"Temprature :"<<endl;
												cin>>f_oraly;
							}
							else { cout<<"Temprature :"<<endl;
							cin>>f_axillary; }
			}

	};

	void check_temp(){ // check the condition

if ((c_oraly >= 37.5 )| (f_oraly >= 99) | (c_axillary >= 37.5-0.4 )|(f_axillary>= 99-0.4)){
	cout<<"High Temprature !"<<endl;
}
else
{
	cout <<"Low Temptaure !"<<endl;}

	};



	void annotation_temp (); //adding the doctor or nurse comments
	 void printinfo_temp(); //print the patient info
};


#endif /* HEADER_HPP_ */
