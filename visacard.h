#include "payment.h"
class visacard :public payment {

private:
   int visacardNo;
   char vexp_date[10];
   int v_cvv;

public:
    visacard();
    visacard(int pPayemtID,double tTotalpayment,int v_vCardNo,char vExpDate[],int vCvv,Order*v_order,Bill*v_bill);
    void setcardDetails(int cPayemtID,double cTotalpayment,int vc_vCardNo,char vcExpDate[],int vc_Cvv,Order*vc_order,Bill*vc_bill);
    void displaycardDetails();
    ~visacard();

};