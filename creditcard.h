#include "payment.h"

class creditcard:public payment{

private:
   int creditcardNo;
   char cexp_date[10];
   int c_cvv;

public:
    creditcard();
    creditcard(int pPayemtID,double tTotalpayment,int cCardNo,char cExpDate[],int cCvv,Order*v_order,Bill*v_bill);
    void setcardDetails(int cPayemtID,double cTotalpayment,int cCardNo,char cExpDate[],int cCvv,Order*vc_order,Bill*vc_bill);
    void displaycardDetails();
    ~creditcard();
};