#include <iostream>
#include <iomanip>
#include"payment.h"
#include"bill.h"
#include"order.h"
using namespace std;

payment::payment()
{
  int  paymentID=0;
  double totalPayment=0.00;
}

payment::payment(int pPayemtID,double tTotalpayment,Bill*cbill, Order*cord );
{
    paymentID= pPayemtID;
    totalPayment=tTotalpayment;
    bill=cbill;
    ord=cord;
}

void payment::setpaymentdetails(int pPayemtID,double tTotalpayment)
{
    paymentID= pPayemtID;
    totalPayment=tTotalpayment;
}
void payment::displaypaymentDetails()
{
  cout<<"Payment ID:"<<paymentID<<endl;
  cout<<"Total Payment:"<<setiosflags(ios::fixed)<<setprecision(2)<<totalPayment<<endl<<endl;
}
void payment::confirmpaymentDetails()
{
  
}
payment::~payment()
{
  cout<<"Payment is deleted"<<endl;
}

