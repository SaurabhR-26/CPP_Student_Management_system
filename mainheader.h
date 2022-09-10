#include <iostream>
#include <string>
#include "coordinate.h"
using namespace std;

class Student
{
public:
    /*student personal record info*/
    string name;
    long int prn;
    int year_study; // to choose from 1st ,2nd ,3rd ,4th
    int branch;     // user will choose from options
    string gender;
    string state;
    int admission_year;
    int bday_date;
    int bday_mon;
    int bday_year;

    /*contact info*/
    string email;
    long int mobile_no;

    /*details of mother */
    string mother_name;
    string prof_mother;
    long int income_mother;

    /*details of father*/
    string father_name;
    string prof_father;
    long int income_father;

    string address;
    long int pincode;

    /*--------------------details of 10 th-----------------*/
    float percent_ssc;
    string name_ssc_school;
    bool is_uploaded_1; // to check whether marksheet is uploaded or not

    /*--------------------details of 12 th-----------------*/
    float percent_hsc;
    string name_hsc_school;
    bool is_uploaded_2; // to check whether marksheet is uploaded or not

    string nationality;

    // economic details
    long int income_family;

    // caste details
    string caste;
    bool caste_certificate;

    bool is_scholership;

    /*medical information*/
    bool is_deficient;
    string deficiency;
    string blood_grp;
};

class teacher
{
    // details
    string name;
    int teacher_id;
    string subject;
    string degree;
    int age;
    int experience;
    string designation;
};