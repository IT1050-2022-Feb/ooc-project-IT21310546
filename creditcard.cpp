#include <iostream>
#include<cstring>
#include"creditcard.h"
using namespace std;

creditcard::creditcard()
{
   int creditcardNo = 0;
   char cexp_date[10];
   int c_cvv;;
}

creditcard::creditcard(int pPayemtID,double tTotalpayment,int cCardNo,char cExpDate[],int cCvv,Order*v_order,Bill*v_bill)
{
  creditcardNo=cCardNo;
  strcpy(cexp_date,cExpDate);
  c_cvv=cCvv;
  paymentID=pPayemtID;
  totalPayment=tTotalpayment;
  bill=v_bill;
  ord=v_order;
  
}

void creditcard::setcardDetails(int cPayemtID,double cTotalpayment,int cCardNo,char cExpDate[],int cCvv,Order*vc_order,Bill*vc_bill);
{
  creditcardNo=cCardNo;
  strcpy(cexp_date,cExpDate);
  c_cvv=cCvv;
  paymentID=cPayemtID;
  totalPayment=cTotalpayment;
  bill=vc_bill;
  ord=vc_order;
}

void creditcard::displaycardDetails()
{
  cout<<"Credit card No:"<<creditcardNo<<endl;
  cout<<"Expire Date:"<<cexp_date<<endl;
  cout<<"CVV :"<< c_cvv<<endl<<endl;
}

creditcard::~creditcard()
{
  cout<<"Creditcardd is deleted"<<endl;
}
