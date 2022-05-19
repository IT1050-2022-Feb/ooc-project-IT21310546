#include <iostream>
#include<cstring>
#include"visacard.h"
using namespace std;

visacard::visacard()
{
   int visacardNo = 0;
   char vexp_date[10];
   int v_cvv;
}

visacard::visacard(int pPayemtID,double tTotalpayment,int v_vCardNo,char vExpDate[],int vCvv,Order*v_order,Bill*v_bill)
{
  visacardNo=v_vCardNo;
  strcpy(vexp_date,vExpDate);
  v_cvv=vCvv;
  paymentID=pPayemtID;
  totalPayment=tTotalpayment;
  bill=v_bill;
  ord=v_order;
  
}

void visacard::setcardDetails(int cPayemtID,double cTotalpayment,int vc_vCardNo,char vcExpDate[],int vc_Cvv,Order*vc_order,Bill*vc_bill)
{
  visacardNo=vc_vCardNo;
  strcpy(vexp_date,vcExpDate);
  v_cvv=vc_Cvv;
  paymentID=cPayemtID;
  totalPayment=cTotalpayment;
  bill=vc_bill;
  ord=vc_order;
  
}

void visacard::displaycardDetails()
{
  cout<<"Visa Card No:"<<visacardNo<<endl;
  cout<<"Expire Date:"<<vexp_date<<endl;
  cout<<"CVV :"<<v_cvv<<endl<<endl;
}

visacard::~visacard()
{
  cout<<"Visacard is deleted"<<endl;
}
