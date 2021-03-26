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
duration_in_years=duration/12;
face_value=amount_customer_needs/(1 - 0.12 * duration_in_years);
cout<<"The face value is GHC"<<face_value<<endl;
monthly_payment=face_value/duration;
cout<<"The monthly payment is GHC"<<monthly_payment<<endl;
cout<<"Enter the number for repetition:"<<endl;
cin>> i;
for (int j = 0; j < i; j++ ){
cout<<"Enter the amount customer needs:";
cin>> amount_customer_needs;
cout<<"Enter the interest rate:";
cin>> interest_rate;
cout<<"Enter the duration in months:";
cin>> duration;
duration_in_years=duration/12;
face_value=amount_customer_needs/(1 - (interest_rate * duration_in_years));
cout<<"The face value is GHC"<<face_value;
monthly_payment=face_value/duration;
cout<<"\nThe monthly payment is GHC"<<monthly_payment << endl;
}
cout << "\nExecution Completed with " << i << " repitition" <<endl;
return 0;
}
