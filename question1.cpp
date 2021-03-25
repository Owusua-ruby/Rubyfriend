#include <iostream>
using namespace std;
int main(){
float amount_customer_needs, interest_rate, face_value, monthly_payment;
int duration, duration_in_years, i;
cout<<"Enter the amount customer needs:";
cin>> amount_customer_needs;
cout<<"Enter the interest rate:";
cin>> interest_rate;
cout<<"Enter the duration in months:";
cin>> duration;
interest_rate=interest_rate + 0.2;
face_value=amount_customer_needs/(1 - (interest_rate * duration_in_years));
duration_in_years=duration/12;
cout<<"The face value is GHC"<<face_value;
monthly_payment=face_value/duration;
cout<<"The monthly payment is GHC"<<monthly_payment;
cout<<"Enter the number for repetition:";
cin>> i;
if(i>0){
goto repeat;}
else{
cout<<"That is all with the repetition.";
repeat:
face_value=amount_customer_needs/(1 - (interest_rate * duration_in_years));
cout<<"The face value is GHC"<<face_value;
monthly_payment=face_value/duration;
cout<<"The monthly payment is GHC"<<monthly_payment;
}
return 0;
}
